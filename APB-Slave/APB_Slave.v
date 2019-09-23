`timescale 1ns/1ps
`define DATAWIDTH 32
`define ADDRWIDTH 4
`define IDLE     2'b00
`define SETUP  2'b01
`define ENABLE  2'b10
module APB_Slave
(
  input                         PCLK,
  input                         PRESETn,
  input        [`ADDRWIDTH-1:0] PADDR,
  input                         PWRITE,
  input                         PSEL,
  input                         PENABLE,
  input        [`DATAWIDTH-1:0] PWDATA,
  output reg   [`DATAWIDTH-1:0] PRDATA,
  output reg                    PREADY
);

reg [`DATAWIDTH-1:0] RAM[0:2**`ADDRWIDTH -1];
integer i;
reg [1:0] State;

always @(negedge PRESETn or negedge PCLK) begin
    if (!PRESETn) begin
        State <= `IDLE;
        PREADY <=0;
    end
    else begin
        case(State) 
        `IDLE : begin
         PREADY <= 0;
         PRDATA <= 0;
            if (PSEL&&!PENABLE)begin
                State <= `SETUP;
            end
            else begin
                State <= `IDLE;
            end
        end

        `SETUP : begin
         PREADY <= 0;
            if (PSEL&&!PENABLE) begin
               
                State <= `ENABLE;        
            end 
            else begin 
                State <= `IDLE; 
            end
        end

        `ENABLE : begin
            if(PWRITE&&PENABLE) begin
                PREADY <= 1;
                RAM[PADDR] <= PWDATA;
                State <= `SETUP;
            end
            else if(!PWRITE&&PENABLE) begin
                PREADY <=1;
                PRDATA <= RAM[PADDR];
                State <= `SETUP;
            end        
            else begin
                State <= `IDLE;
            end
        end
        endcase
    end

end
endmodule