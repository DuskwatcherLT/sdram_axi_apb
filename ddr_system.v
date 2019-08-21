`timescale 1ns/1ps

module ddr_system(
/*
dto,
ato,
zq,
VREF,
VDD,
VSS,
VDDQ,
VSSQ,
*/
    input           clk_i,
    input           rst_i,
    
    output          sdram_clk_o,
    output          sdram_cke_o,
    output [1:0]    sdram_dqm_o,
    output          sdram_cas_o,
    output          sdram_ras_o,
    output          sdram_we_o,
    output          sdram_cs_o,
    output [1:0]    sdram_ba_o,
    output [12:0]   sdram_addr_o,
    inout  [15:0]   sdram_data_io

);

wire [ 15:0]        sdram_data_in_w;
wire [ 15:0]        sdram_data_out_w;
wire                sdram_data_out_en_w;

sdram_axi
u_sdram
(
     .clk_i(clk_i)
    ,.rst_i(rst_i)

    // AXI port
    ,.inport_awvalid_i(awvalid_0)
    ,.inport_awaddr_i(awaddr_0)
    ,.inport_awid_i(awid_0)
    ,.inport_awlen_i(awlen_0)
    ,.inport_awburst_i(awburst_0)
    ,.inport_wvalid_i(wvalid_0)
    ,.inport_wdata_i(wdata_0)
    ,.inport_wstrb_i(wstrb_0)
    ,.inport_wlast_i(wlast_0)
    ,.inport_bready_i(bready_0)
    ,.inport_arvalid_i(arvalid_0)
    ,.inport_araddr_i(araddr_0)
    ,.inport_arid_i(arid_0)
    ,.inport_arlen_i(arlen_0)
    ,.inport_arburst_i(arburst_0)
    ,.inport_rready_i(rready_0)
    ,.inport_awready_o(awready_0)
    ,.inport_wready_o(wready_0)
    ,.inport_bvalid_o(bvalid_0)
    ,.inport_bresp_o(bresp_0)
    ,.inport_bid_o(bid_0)
    ,.inport_arready_o(arready_0)
    ,.inport_rvalid_o(rvalid_0)
    ,.inport_rdata_o(rdata_0)
    ,.inport_rresp_o(rresp_0)
    ,.inport_rid_o(rid_0)
    ,.inport_rlast_o(rlast_0)

    // SDRAM Interface
    ,.sdram_clk_o()
    ,.sdram_cke_o(sdram_cke_o)
    ,.sdram_cs_o(sdram_cs_o)
    ,.sdram_ras_o(sdram_ras_o)
    ,.sdram_cas_o(sdram_cas_o)
    ,.sdram_we_o(sdram_we_o)
    ,.sdram_dqm_o(sdram_dqm_o)
    ,.sdram_addr_o(sdram_addr_o)
    ,.sdram_ba_o(sdram_ba_o)
    ,.sdram_data_input_i(sdram_data_in_w)
    ,.sdram_data_output_o(sdram_data_out_w)
    ,.sdram_data_out_en_o(sdram_data_out_en_w)
);

//-------------AXI------------------------------------------------
reg   [3:0]            awid;
reg                                  awvalid;
wire                                 awready;
reg   [31:0]          awaddr;
reg   [7:0]           awlen;
reg   [2:0]                          awsize;
reg   [1:0]                          awburst;
reg   [3:0]                          awcache;

//reg   [`UMCTL2_AXI_LOCK_WIDTH-1:0]   awlock;
reg   [2:0]                          awprot;
//reg   [AXI_USERW-1:0]                awuser;
reg   [3:0]                          awqos;
reg                                  awurgent;
reg                                  awpoison;
reg   [3:0]                          awregion;

//reg                                  wvalid;
wire                                   wvalid;
reg                                  wready;
//reg   [`UMCTL2_PORT_DW_0-1:0]        wdata;
wire  [31:0]        wdata;
reg   [3:0]    wstrb;
//reg                                  wlast;
wire                                   wlast;
//reg   [AXI_USERW-1:0]                wuser;

reg   [3:0]            bid;
reg                                  bvalid;
reg                                  bready;
reg   [1:0]                bresp;
//reg   [AXI_USERW-1:0]                buser;
     
reg   [3:0]            arid;
reg                                  arvalid;
wire                                 arready;
reg   [31:0]          araddr;
reg   [7:0]           arlen;
//reg   [AXI_SIZEW-1:0]                arsize;
reg   [1:0]               arburst;
//reg   [AXI_CACHEW-1:0]               arcache;
     
//reg   [`UMCTL2_AXI_LOCK_WIDTH_0-1:0] arlock;
//reg   [AXI_PROTW-1:0]                arprot;
//reg   [AXI_USERW-1:0]                aruser;
//reg   [AXI_QOSW-1:0]                 arqos;
reg                                  arpoison;
//reg   [`UMCTL2_AXI_REGION_WIDTH-1:0] arregion;
reg                                  arurgent;
reg                                  arpoison_intr;

wire  [3:0]            rid;
wire                                 rvalid;
reg                                  rready;
wire  [31:0]        rdata;
wire  [1:0]                rresp;
//wire  [AXI_USERW-1:0]                ruser;
wire                                 rlast;

assign awid_0 =      awid;
assign awvalid_0 =   awvalid;
assign awready =     awready_0;
assign awaddr_0 =    awaddr;
assign awlen_0 =     awlen;
assign awsize_0 =    awsize;
assign awburst_0 =   awburst;
assign awcache_0 =   awcache;

//assign awlock_0 =    awlock;
assign awprot_0 =    awprot;
//assign awuser_0 =    awuser;
assign awqos_0 =     awqos;
assign awurgent_0 =  awurgent;
assign awpoison_0 =  awpoison;
assign awregion_0 =  awregion;

assign wvalid_0 =    wvalid;
assign wready =      wready_0;
assign wdata_0 =     wdata; 
assign wstrb_0 =     wstrb; 
assign wlast_0 =     wlast;
//assign wuser_0 =     wuser; 

assign bready_0 = 1'b1;

//ar
assign arid_0 = arid;
assign arvalid_0 = arvalid;
assign arready = arready_0;
assign araddr_0 = araddr;
assign arlen_0 = arlen;
//assign arsize_0 = arsize;
assign arburst_0 = arburst;
//assign arcache_0 = arcache;

//assign arlock_0 = arlock;
//assign arprot_0 = arprot;
//assign aruser_0 = aruser;
//assign arqos_0 = arqos;
assign arpoison_0 = arpoison;
//assign arregion_0 = arregion;
assign arurgent_0 = arurgent;

//r
assign rready_0 = rready;
assign rvalid = rvalid_0;

assign rid = rid_0;
assign rdata = rdata_0;
assign rresp = rresp_0;
//assign ruser = ruser_0;
assign rlast = rlast_0;

assign csysreq_0 = {1{1'b0}};

`define WR_CNT          32'h0100
//`define WR_CNT          32'h1000
//`define WR_CNT          32'h1000000
//`define WR_ADDR_STEP    40'd128//one burst is 8*8=64bytes
`define WR_ADDR_STEP    40'd64//one burst is 8*8=64bytes
//`define WR_ADDR_START   40'h1000000000;
`define WR_ADDR_START   40'h0000000000;
`define WR_DATA_START   64'h0123456789abcdef;
//`define WR_DATA_START   64'h0000000000000000;
`define BURST_LEN_INIT  8'h8;

`define WR_STAT_IDLE    3'b000
`define WR_STAT_WADDR   3'b001
`define WR_STAT_WDATA   3'b010

`define RD_STAT_IDLE    3'b000
`define RD_STAT_RADDR   3'b001
`define RD_STAT_RDATA   3'b010

//wire[31:0] ddrControllerStat;
//wire ctlNormal; 
//assign ddrControllerStat = u0_DWC_ddr_umctl2.U_apb_slvtop.coreif.r1_stat;
//assign ctlNormal = (ddrControllerStat & 32'h1) == 32'h1;

reg  [2:0]   axiWrStatus;
reg  [7:0]   burstLen;
reg  [39:0]  axiAwaddr;
reg  [63:0]  axiWdata;
reg  [63:0]  axiRdata;

reg  [31:0]  axiWrCnt;
reg  [31:0]  axiRdCnt;
reg  [2:0]   axiRdStatus;
reg  [39:0]  axiAraddr;

wire axiWrStage =  axiWrCnt < (`WR_CNT +32'h00);
wire axiRdStage =  (!axiWrStage) && axiRdCnt < `WR_CNT;//32'h200;
wire axiTestOver = !axiRdStage && (axiRdCnt >= `WR_CNT);

assign wdata = axiWdata;
assign wvalid = axiWrStatus == `WR_STAT_WDATA && burstLen >0;
assign wlast = axiWrStatus == `WR_STAT_WDATA && burstLen == 8'h1;

reg  axiClk;
always@(posedge axiClk) begin
  if(!rst_i) begin
    axiWrCnt <= 32'h0;

    axiAwaddr <= `WR_ADDR_START;
    burstLen <= `BURST_LEN_INIT; 
    axiWdata <= `WR_DATA_START; 
    axiRdata <= `WR_DATA_START; 
    axiWrStatus <= `WR_STAT_IDLE;

    axiRdCnt <= 32'h0;
    axiRdStatus <= `RD_STAT_IDLE;
    axiAraddr <= `WR_ADDR_START;

    //write
    awid <= {3{1'b0}};
    awvalid <= {1{1'b0}};
    awaddr <= {32{1'b0}};
    awlen <= {8{1'b0}};
    awsize <= {3{1'b0}};
    awburst <= {2{1'b0}};
    awcache <= {4{1'b0}};

//    awlock <= {`UMCTL2_AXI_LOCK_WIDTH_0{1'b0}};
//    awprot <= {3{1'b0}};
 //   awuser <= {AXI_USERW{1'b0}};
    awqos <= {4{1'b0}};
    awurgent <= {1{1'b0}};
    awpoison <= {1{1'b0}};
    awregion <= {4{1'b0}};

//    wstrb <= {`UMCTL2_PORT_NBYTES_0{1'b1}};
//    wuser <= {AXI_USERW{1'b0}};
    //read
    arid <= {4{1'b0}};
    arvalid <= {1{1'b0}};
    araddr <= {32{1'b0}};
    arlen <= {8{1'b0}};
//    arsize <= {AXI_SIZEW{1'b0}};
//    arburst <= {AXI_BURSTW{1'b0}};
//    arcache <= {AXI_CACHEW{1'b0}};
   
//    arlock <= {`UMCTL2_AXI_LOCK_WIDTH_0{1'b0}};
//    arprot <= {AXI_PROTW{1'b0}};
//    aruser <= {AXI_USERW{1'b0}};
//    arqos <= {AXI_QOSW{1'b0}};
    arpoison <= {1{1'b0}};
//    arregion <= {`UMCTL2_AXI_REGION_WIDTH{1'b0}};
    arurgent <= {1{1'b0}};
    rready <= 1'b0;
  end
  else begin
    if(apbEnd) begin
      if(axiWrStage) begin
        if(axiWrStatus==`WR_STAT_IDLE) begin //aw
          axiWrStatus <= `WR_STAT_WADDR;
          awid <= 12'h0;
          awvalid <= 1'b1;
          awaddr <= axiAwaddr;
          awlen <= 8'h07;//8 burst len
          awsize <= 3'h3;//64bit(8Byte)
          awburst <= 2'h1;
          awcache <= 4'h0;
          burstLen <= `BURST_LEN_INIT; 
        end
        else if(axiWrStatus==`WR_STAT_WADDR) begin //aw ack
          if(awready) begin
            axiWrStatus <= `WR_STAT_WDATA;
            awvalid <= 1'b0;
          end
        end
        else if(axiWrStatus==`WR_STAT_WDATA) begin //wvalid
          if(burstLen >0) begin 
            wstrb <= {4{1'b1}};
            if(wready) begin
              burstLen <= burstLen -8'h1;
              axiWdata <= axiWdata + 64'h0000000000000008;
            end
          end
          else begin
            axiWrCnt <= axiWrCnt + 32'h1;
            axiWrStatus <= `WR_STAT_IDLE;
            axiAwaddr <= axiAwaddr + `WR_ADDR_STEP;
            if(axiWrCnt == `WR_CNT-1) begin
              $display("time(%t) write complete!!",$time);
            end 
          end
        end
      end
  
      else if(axiRdStage) begin //axi read stage
        if(axiRdStatus==`RD_STAT_IDLE) begin //ar
          axiRdStatus <= `RD_STAT_RADDR;
          arid <= 12'h0;
          arvalid <= 1'b1;
          araddr <= axiAraddr;
          arlen <= 8'h07;//8 burst len
          arsize <= 3'h3;//64bit(8Byte)
          arburst <= 2'h1;
          arcache <= 4'h0;
          rready <= 1'b0;
          burstLen <= `BURST_LEN_INIT;
        end
        else if(axiRdStatus==`RD_STAT_RADDR) begin //ar ack
          if(arready) begin
            axiRdStatus <= `RD_STAT_RDATA;
            arvalid <= 1'b0;
          end
        end
        else if(axiRdStatus==`RD_STAT_RDATA) begin //rvalid
          if(burstLen !=0) begin 
            rready <= 1'b1;
            if(rvalid) begin
              burstLen <= burstLen - 8'h1;
              axiRdata <= axiRdata + 64'h0000000000000008;
            end
          end
          else begin
            axiRdCnt <= axiRdCnt + 32'h1;
            axiRdStatus <= `RD_STAT_IDLE;
            axiAraddr <= axiAraddr + `WR_ADDR_STEP;
          end
        end
      end
  
    end
  end
end

always@(posedge axiClk) begin
  if(wvalid && wready) begin
    $display("time(%t) axiWrCnt(%d) awaddr(%h) burstLen(%d) wdata:%h",$time,axiWrCnt,axiAwaddr,burstLen,wdata);
  end
  if(rvalid && rready) begin
    $display("time(%t) axiRdCnt(%d) araddr(%h) burstLen(%d) [expected data:%h read data:%h] (matched:%s)",$time,axiRdCnt,axiAraddr,burstLen,axiRdata,rdata,(axiRdata==rdata)?"YES":"NO");
  end
end
//-----------reset and clock--------------------------------------
assign aclk_0 = axiClk;

assign apbRSTn = apb_rst_n; 
assign ddrRstn= rst_n;
assign aresetn_0 = rst_n;

assign rst_n =  u0_ddr_top.ddrc_reg_init_done;

initial begin
  ddrClk   <= 0;
  axiClk <= 0;
  apbClk <=0;
  apb_rst_n <= 0;
  axi_rst_n <= 0;
  apbInitStart <= 0;
  repeat (15) @(posedge apbClk); 
  apb_rst_n <= 1;
  repeat (15) @(posedge apbClk); 
  apbInitStart <=1;
end

always begin
  #0.938 ddrClk <= ~ddrClk;
end

always begin
  #3.000 apbClk <= ~apbClk;
end

always begin
  #0.200 axiClk <= ~axiClk;
  //#0.938 axiClk <= ~axiClk;
end

/*
initial begin
  $display("start fsdb!!!");
  $fsdbDumpfile("ddr_system.fsdb");
  $fsdbDumpvars(0,ddr_system);
end
*/

initial begin
  $vcdpluson;//ok
end

/*
initial begin
  #400000
  $display("Time Out !!!");
  $finish;
end
*/

always@(posedge axiTestOver) begin
  #400
  $display("Test Over!!!");
  $finish;
end

initial begin
  //$readmemh("apbMem.txt.udimm",apbMem);
  $readmemh("ddrInit.hex",apbMem);

//$readmemh("apbMem.txt",apbMem);
//  for(n=0;n<=285;n=n+1) begin
//    assign apbCmd = apbMem[n];
//    $display("%h",apbCmd);
//  end
end

endmodule

