`timescale 1ns/1ps
`define UMCTL2_AXI_LOCK_WIDTH 2
`define UMCTL2_AXI_LOCK_WIDTH_0 1
`define UMCTL2_AXI_REGION_WIDTH 2
`define UMCTL2_APB_DW 32
`define UMCTL2_A_IDW 4
`define UMCTL2_A_ADDRW 32
`define UMCTL2_A_LENW 8
`define UMCTL2_PORT_DW_0 32
`define UMCTL2_PORT_NBYTES_0 4
`define UMCTL2_APB_AW 12

//APB define
`define  ADDRWIDTH 8
`define  DATAWIDTH 32


`define         reserved  3'b000 
`define         WB  1'b0            
`define         Op_Mode  2'b00       
`define         Cas_Latency  3'b010  
`define         BT  1'b0           
`define         Burst_Length 3'b001  

module sdram_system(
);

parameter  AXI_USERW = 1;
parameter AXI_SIZEW = 4;
parameter AXI_CACHEW = 4;
parameter AXI_PROTW = 3;
parameter AXI_QOSW = 4;
parameter pAPB_DATA_WIDTH = 32;
parameter pCK_WIDTH = 3;
parameter pNO_OF_RANKS = 2;
parameter pBANK_WIDTH = 3;
parameter pADDR_WIDTH = 16;
parameter pRST_WIDTH = 2;
parameter pNO_OF_BYTES = 4;
parameter pNO_OF_ZQ = 1;
parameter pAPB_ADDR_WIDTH = 8;
parameter AXI_BURSTW = 2;
parameter AXI_RESPW = 2;
parameter XPI_RAQD_LG2_0 = 2;
parameter XPI_WAQD_LG2_0 = 3;

//-------------------------------
//test out
/*

wire [pRST_WIDTH             -1:0]   ram_rst_n;
wire [pCK_WIDTH              -1:0]   ck;
wire [pCK_WIDTH              -1:0]   ck_n;


wire [pNO_OF_RANKS           -1: 0]   cke;
wire [pNO_OF_RANKS           -1:0]   odt;
wire [pNO_OF_RANKS           -1:0]   cs_n;
wire                                 ras_n;
wire                                 cas_n;
wire                                 we_n;
wire [pBANK_WIDTH            -1:0]   ba;
wire [pADDR_WIDTH            -1:0]   a;


wire [pNO_OF_BYTES           -1:0]   dqs;
wire [pNO_OF_BYTES           -1:0]   dqs_n;
wire [pNO_OF_BYTES           -1:0]   dm;
wire [pNO_OF_BYTES*8         -1:0]   dq;
wire                                 par_in;
wire                                 err_out_n;
wire                                 tpd;
wire                                 tq;

reg                                  ddrClk;
wire                                 ddrRstn;
wire                                 aresetn_0;
wire                                 aclk_0;

reg									 axi_rst_n;
*/
wire [`UMCTL2_A_IDW-1:0]             awid_0;
wire                                 awvalid_0;
wire                                 awready_0;
wire [`UMCTL2_A_ADDRW-1:0]           awaddr_0;
wire [`UMCTL2_A_LENW-1:0]            awlen_0;
wire [2:0]                           awsize_0;
wire [1:0]                           awburst_0;
wire [3:0]                           awcache_0;

wire [`UMCTL2_AXI_LOCK_WIDTH_0-1:0]  awlock_0;
wire [2:0]                           awprot_0;
wire [AXI_USERW-1:0]                 awuser_0;
wire [3:0]                           awqos_0;
wire                                 awurgent_0;
wire                                 awpoison_0;
wire [3:0]                           awregion_0;
wire                                 awpoison_intr_0;

wire                                 wvalid_0;
wire                                 wready_0;
wire [`UMCTL2_PORT_DW_0-1:0]         wdata_0;
wire [`UMCTL2_PORT_NBYTES_0-1:0]     wstrb_0;
wire                                 wlast_0;
wire [AXI_USERW-1:0]                 wuser_0;//ok


wire [`UMCTL2_A_IDW-1:0]             bid_0;
wire                                 bvalid_0;
wire                                 bready_0;
wire [AXI_RESPW-1:0]                 bresp_0;
wire [AXI_USERW-1:0]                 buser_0;//ok,not imp

wire [`UMCTL2_A_IDW-1:0]             arid_0;
wire                                 arvalid_0;
wire                                 arready_0;
wire [`UMCTL2_A_ADDRW-1:0]           araddr_0;
wire [`UMCTL2_A_LENW-1:0]            arlen_0;
wire [AXI_SIZEW-1:0]                 arsize_0;
wire [AXI_BURSTW-1:0]                arburst_0;
wire [AXI_CACHEW-1:0]                arcache_0;

wire [`UMCTL2_AXI_LOCK_WIDTH_0-1:0]  arlock_0;
wire [AXI_PROTW-1:0]                 arprot_0;
wire [AXI_USERW-1:0]                 aruser_0;
wire [AXI_QOSW-1:0]                  arqos_0;
wire                                 arpoison_0;
wire [`UMCTL2_AXI_REGION_WIDTH-1:0]  arregion_0;
wire                                 arurgent_0;
wire                                 arpoison_intr_0;//ok,not imp

wire [`UMCTL2_A_IDW-1:0]             rid_0;
wire                                 rvalid_0;
wire                                 rready_0;
wire [`UMCTL2_PORT_DW_0-1:0]         rdata_0;
wire [AXI_RESPW-1:0]                 rresp_0;
wire [AXI_USERW-1:0]                 ruser_0;
wire                                 rlast_0;

wire [XPI_RAQD_LG2_0:0]              raq_wcount_0;
wire                                 raq_pop_0;
wire                                 raq_push_0;
wire                                 raq_split_0;
wire [XPI_WAQD_LG2_0:0]              waq_wcount_0;
wire                                 waq_pop_0;
wire                                 waq_push_0;
wire                                 waq_split_0;
wire                                 csysreq_0;
wire                                 csysack_0;
wire                                 cactive_0;

//------------------------------------------------
reg             rst_i;
reg				      clk_i;
wire [15:0]     Dq_0;
wire				    sdram_clk_o;
wire			    	sdram_cke_o;
wire				    sdram_cs_o;
wire				    sdram_ras_o;
wire				    sdram_cas_o;
wire				    sdram_we_o;
wire [1:0]			sdram_dqm_o;
wire [12:0]			sdram_addr_o;
wire [1:0]			sdram_ba_o;
wire [ 15:0]        sdram_data_in_w;
wire [ 15:0]        sdram_data_out_w;
wire                sdram_data_out_en_w;

//------------------APB WIER---------
wire                        PCLK_i;
wire                        PRESETn_i;
wire [`ADDRWIDTH-1:0]       PADDR_i;
wire                        PWRITE_i;
wire                        PSEL_i;
wire                        PENABLE_i;   
wire [`DATAWIDTH-1:0]       PWDATA_i;
wire [`DATAWIDTH-1:0]       PRDATA_o;
wire                        PREADY_o;                


//-----------------------------------------------
sdram_apb_top
u_sdram
(
     .clk_i(clk_i)
    ,.rst_i(!rst_i)

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
    ,.sdram_clk_o(sdram_clk_o)
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

    //APB Interface
    ,.PCLK(PCLK_i)
    ,.PRESETn(PRESETn_i)
    ,.PADDR(PADDR_i)
    ,.PWRITE(PWRITE_i)
    ,.PSEL(PSEL_i)
    ,.PENABLE(PENABLE_i)
    ,.PWDATA(PWDATA_i)
    ,.PRDATA(PRDATA_o)
    ,.PREADY(PREADY_o)

);

assign Dq_0 = (sdram_data_out_en_w ? sdram_data_out_w : 16'hzzzz);
assign sdram_data_in_w = (sdram_we_o?Dq_0:16'hzzzz);


//rank sdram 
mt48lc16m16a2
// #(
// .tAC (5.4),
// .tHZ (5.4),
// .tOH (2.5),
// .tMRD (3.0),
// .tRAS (40.0),
// .tRC (58.0),
// .tRCD (18.0),
// .tRFC (60.0),
// .tRP (18.0),
// .tRRD (12.0),
// .tWRa (7.0),
// .tWRm (14.0)
// )
sdram0(
.Dq(Dq_0),
.Addr(sdram_addr_o),
.Ba(sdram_ba_o),
.Clk(sdram_clk_o),
.Cke(sdram_cke_o),
.Cs_n(sdram_cs_o),
.Ras_n(sdram_ras_o),
.Cas_n(sdram_cas_o),
.We_n(sdram_we_o),
.Dqm(sdram_dqm_o)
);

//-----------------APB---------------------
  reg                         PCLK;
  reg                         PRESETn;
  reg        [`ADDRWIDTH-1:0] PADDR;
  reg                         PWRITE;
  reg                         PSEL;
  reg     	 [`DATAWIDTH-1:0] PWDATA;
  reg                         PREADY;
  reg                         PENABLE;
  reg        [`DATAWIDTH-1:0] PRDATA;
  assign PCLK_i = PCLK;
  assign PRESETn_i = PRESETn;
  assign PADDR_i = PADDR;
  assign PWRITE_i = PWRITE;
  assign PSEL_i = PSEL;
  assign PWDATA_i = PWDATA;
  assign PENABLE_i = PENABLE;
  assign PREADY = PREADY_o;
  assign PRDATA = PRDATA_o;
  /*
  `define apbWIDLE 2'b00
  `define apbWSETUP 2'b01
  `define apbWENABLE 2'b10
  `define apbRIDLE 2'b00
  `define apbRSETUP 2'b01
  `define apbRENABLE 2'b10
*/
  `define apbWIDLE 3'b000
  `define apbWSETUP 3'b001
  `define apbWENABLE 3'b010
  `define apbRIDLE 3'b011
  `define apbRSETUP 3'b100
  `define apbRENABLE 3'b101

  
  reg [2:0] apbWstate;
  reg [2:0] apbRstate;
  
  reg [2:0] apbstate;
  
  integer i=0;
  integer j=0;
  always@(negedge PCLK) begin
    if(!PRESETn)begin
      PSEL <=0;
      PADDR <=0;
      PWRITE <=0;  
      //apbWstate <= `apbWIDLE;
      //apbRstate <= `apbRIDLE;
      apbstate <= `apbWIDLE;
    end
    else begin
      if(apbstate == `apbWIDLE) begin
          PSEL <=1;
          PENABLE <=0;
          //apbstate<=`apbRSETUP
          apbstate <= `apbWSETUP;
        end
      else if (apbstate == `apbWSETUP&&i < 7) begin
        PADDR <=i;
        PWRITE <=1;
        PENABLE <=0;
        apbstate <= `apbWENABLE;        
        case (i)
           0: begin
	        	PWDATA = `reserved;
           end 
           1: begin
	      	  PWDATA = `WB;
           end
           2: begin
	      	  PWDATA = `Op_Mode;
           end
           3: begin
	      	PWDATA = `Cas_Latency;
           end
           4: begin
	      	PWDATA = `BT;
           end
           5: begin
	      	PWDATA = `Burst_Length;
           end
           6: begin 
           PWDATA = 32'h00000000;
           end
           default:begin
	      	PWDATA = 32'h00000000;
          end
      endcase
       
        //i=i+1;
      end
      else if (apbstate == `apbWENABLE) begin
        PENABLE <=1;
        if(PREADY)begin
           $display("PADDR %h, PWDATA %h  ",PADDR,PWDATA);
            i=i+1;
        end
       
        apbstate <= `apbWSETUP;
        
      end
      else if (i >= 7) begin
         PWRITE <=0;
         //#10
         apbstate <= `apbRIDLE;
      end

      if(apbstate == `apbRIDLE)begin
        PSEL <=1;
        PENABLE <=0;
        apbstate <= `apbRSETUP;
      end
      else if (apbstate == `apbRSETUP&&j< 7) begin
         PADDR <=j;
         PWRITE <=0;
         PENABLE <= 0;
         apbstate <= `apbRENABLE;
      end
      else if (apbstate == `apbRENABLE) begin
        PENABLE <=1;
        if(PREADY) begin
            j=j+1;
            $display("PADDR %h, PRDATA %h  ",PADDR,PRDATA);
        end
        //j=j+1;
        apbstate <=`apbRSETUP;
      end
      else if (j >=7) begin
         apbstate <= `apbWIDLE;
      end
    end    
  end


//Transfer parameters using apb.
 
 /*integer i;
 integer j;
task Write;
 begin
	//for (i = 0; i < 2**`ADDRWIDTH; i=i+1) begin
	for (i = 0; i < 6; i=i+1) begin
	@(negedge PCLK) begin
	 	PSEL = 1;
	 	PWRITE = 1;
    case (i)
      0: begin
        	PADDR = i;
	      	PWDATA = `reserved;
          PENABLE = 0;
          #2 
          PENABLE = 1;
          if (PREADY) begin
              $display("PADDR %h, PWDATA %h  ",PADDR,PWDATA);
          end
      end 
      1: begin
        	PADDR = i;
	      	PWDATA = `WB;
          PENABLE = 0;
          #2 
          PENABLE = 1;
	        if (PREADY) begin
              $display("PADDR %h, PWDATA %h  ",PADDR,PWDATA);
          end
      end
      2: begin
        	PADDR = i;
	      	PWDATA = `Op_Mode;
          PENABLE = 0;
          #2 
          PENABLE = 1;
          if (PREADY) begin
              $display("PADDR %h, PWDATA %h  ",PADDR,PWDATA);
          end
      end
      3: begin
        	PADDR = i;
	      	PWDATA = `Cas_Latency;
          PENABLE = 0;
          #2 
          PENABLE = 1;
          if (PREADY) begin
              $display("PADDR %h, PWDATA %h  ",PADDR,PWDATA);
          end
      end
      4: begin
        	PADDR = i;
	      	PWDATA = `BT;
          PENABLE = 0;
          #2 
          PENABLE = 1;
          if (PREADY) begin
              $display("PADDR %h, PWDATA %h  ",PADDR,PWDATA);
          end
      end
      5: begin
        	PADDR = i;
	      	PWDATA = `Burst_Length;
          PENABLE = 0;
          #2 
          PENABLE = 1;
          if (PREADY) begin
              $display("PADDR %h, PWDATA %h  ",PADDR,PWDATA);
          end
      end
      default:
          begin
        	PADDR = i;
	      	PWDATA = 32'h00000000;
          PENABLE = 0;
          #2 
          PENABLE = 1;
          if (PREADY) begin
              $display("PADDR %h, PWDATA %h  ",PADDR,PWDATA);
          end
          end
    endcase
	  end
    end
end
endtask



task Read;
 begin
 	// #1;
	//for (i = 0; i < 2**`ADDRWIDTH; i=i+1) begin
	for (j = 0; j < 6; j=j+1) begin
	@(negedge PCLK) begin
	 	PSEL = 1;
	 	PWRITE = 0;
    PENABLE = 0;
    case (j)
      0: begin
        	PADDR = j;
	      	
          PENABLE = 0;
          #2 
          PENABLE = 1;
          if (PREADY) begin
            $display("PADDR %h, PRDATA %h  ",PADDR,PRDATA);
          end
	     
      end 
      1: begin
        	PADDR = j;
          PENABLE = 0;
          #2 
          PENABLE = 1;
          if (PREADY) begin
            $display("PADDR %h, PRDATA %h  ",PADDR,PRDATA);
          end
      end
      2: begin
        	PADDR = j;
          PENABLE = 0;
          #2 
          PENABLE = 1;
	        if (PREADY) begin
            $display("PADDR %h, PRDATA %h  ",PADDR,PRDATA);
          end
      end
      3: begin
        	PADDR = j;
          PENABLE = 0;
          #2 
          PENABLE = 1;
	        if (PREADY) begin
            $display("PADDR %h, PRDATA %h  ",PADDR,PRDATA);
          end
      end
      4: begin
        	PADDR = j;
          PENABLE = 0;
          #2 
          PENABLE = 1;
	        if (PREADY) begin
            $display("PADDR %h, PRDATA %h  ",PADDR,PRDATA);
          end
      end
      5: begin
        	PADDR = j;
          PENABLE = 0;
          #2 
          PENABLE = 1;
	        if (PREADY) begin
            $display("PADDR %h, PRDATA %h  ",PADDR,PRDATA);
          end
      end
      default:
          begin
        	PADDR = j;
          PENABLE = 0;
          #2 
          PENABLE = 1;
	        if (PREADY) begin
            $display("PADDR %h, PRDATA %h  ",PADDR,PRDATA);
          end
          end
    endcase
	  end
  end
end
endtask
*/



//-------------AXI------------------------------------------------
reg   [3:0]            awid;
reg                                  awvalid;
wire                                 awready;
reg   [31:0]          awaddr;
reg   [7:0]           awlen;
reg   [2:0]                          awsize;
reg   [1:0]                          awburst;
reg   [3:0]                          awcache;

reg   [`UMCTL2_AXI_LOCK_WIDTH-1:0]   awlock;
reg   [2:0]                          awprot;
reg   [AXI_USERW-1:0]                awuser;
reg   [3:0]                          awqos;
reg                                  awurgent;
reg                                  awpoison;
reg   [3:0]                          awregion;

//reg                                  wvalid;
wire                                   wvalid;
reg                                  wready;
//reg   [`UMCTL2_PORT_DW_0-1:0]        wdata;
wire  [31:0]        wdata;
//wire  [15:0]		wdata;
reg   [3:0]    wstrb;
//reg                                  wlast;
wire                                   wlast;
reg   [AXI_USERW-1:0]                wuser;

reg   [3:0]            bid;
reg                                  bvalid;
reg                                  bready;
reg   [1:0]                bresp;
reg   [AXI_USERW-1:0]                buser;
     
reg   [3:0]            arid;
reg                                  arvalid;
wire                                 arready;
reg   [31:0]          araddr;
reg   [7:0]           arlen;
reg   [AXI_SIZEW-1:0]                arsize;
reg   [1:0]               arburst;
reg   [AXI_CACHEW-1:0]               arcache;
     
reg   [`UMCTL2_AXI_LOCK_WIDTH_0-1:0] arlock;
reg   [AXI_PROTW-1:0]                arprot;
reg   [AXI_USERW-1:0]                aruser;
reg   [AXI_QOSW-1:0]                 arqos;
reg                                  arpoison;
reg   [`UMCTL2_AXI_REGION_WIDTH-1:0] arregion;
reg                                  arurgent;
reg                                  arpoison_intr;

wire  [3:0]            rid;
wire                                 rvalid;
reg                                  rready;
wire  [31:0]        rdata;
wire  [1:0]                rresp;
wire  [AXI_USERW-1:0]                ruser;
wire                                 rlast;

assign awid_0 =      awid;
assign awvalid_0 =   awvalid;
assign awready =     awready_0;
assign awaddr_0 =    awaddr;
assign awlen_0 =     awlen;
assign awsize_0 =    awsize;
assign awburst_0 =   awburst;
assign awcache_0 =   awcache;

assign awlock_0 =    awlock;
assign awprot_0 =    awprot;
assign awuser_0 =    awuser;
assign awqos_0 =     awqos;
assign awurgent_0 =  awurgent;
assign awpoison_0 =  awpoison;
assign awregion_0 =  awregion;

assign wvalid_0 =    wvalid;
assign wready =      wready_0;
assign wdata_0 =     wdata; 
assign wstrb_0 =     wstrb; 
assign wlast_0 =     wlast;
assign wuser_0 =     wuser; 

assign bready_0 = 1'b1;

//ar
assign arid_0 = arid;
assign arvalid_0 = arvalid;
assign arready = arready_0;
assign araddr_0 = araddr;
assign arlen_0 = arlen;
assign arsize_0 = arsize;
assign arburst_0 = arburst;
assign arcache_0 = arcache;

assign arlock_0 = arlock;
assign arprot_0 = arprot;
assign aruser_0 = aruser;
assign arqos_0 = arqos;
assign arpoison_0 = arpoison;
assign arregion_0 = arregion;
assign arurgent_0 = arurgent;

//r
assign rready_0 = rready;
assign rvalid = rvalid_0;

assign rid = rid_0;
assign rdata = rdata_0;
assign rresp = rresp_0;
assign ruser = ruser_0;
assign rlast = rlast_0;

assign csysreq_0 = {1{1'b0}};

`define WR_CNT          32'h0100
//`define WR_CNT          32'h1000
//`define WR_CNT          32'h1000000
//`define WR_ADDR_STEP    40'd128//one burst is 8*8=64bytes
//`define WR_ADDR_STEP    40'd64//one burst is 8*8=64bytes
//`define WR_ADDR_STEP    40'd32 
`define WR_ADDR_STEP    30'd16
//`define WR_ADDR_START   40'h1000000000;
`define WR_ADDR_START   40'h0000000000 
//`define WR_DATA_START   64'h0123456789abcdef;
`define WR_DATA_START	32'h01234567
//`define WR_DATA_START   64'h0000000000000000;
`define BURST_LEN_INIT  8'h2;
//`define BURST_LEN_INIT  8'h4;

//`define BURST_LEN_INIT  8'h2;
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
//reg  [63:0]  axiWdata;
//reg  [63:0]  axiRdata;
reg  [31:0]  axiWdata;
reg  [31:0]  axiRdata;
reg  [31:0]  axiWrCnt;
reg  [31:0]  axiRdCnt;
reg  [2:0]   axiRdStatus;
reg  [39:0]  axiAraddr;

wire axiWrStage =  axiWrCnt < (`WR_CNT +32'h00);
wire axiRdStage =  (!axiWrStage) && axiRdCnt < `WR_CNT;//32'h200;
wire axiTestOver = !axiRdStage && (axiRdCnt >= `WR_CNT);

assign wdata = axiWdata;

//assign wvalid = axiWrStatus == `WR_STAT_WADDR && burstLen >0;
assign wvalid = axiWrStatus == `WR_STAT_WDATA && burstLen >0;
assign wlast = axiWrStatus == `WR_STAT_WDATA && burstLen == 8'h1;
//assign wvalid = 1;
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

    awlock <= {`UMCTL2_AXI_LOCK_WIDTH_0{1'b0}};
    awprot <= {3{1'b0}};
    awuser <= {AXI_USERW{1'b0}};
    awqos <= {4{1'b0}};
    awurgent <= {1{1'b0}};
    awpoison <= {1{1'b0}};
    awregion <= {4{1'b0}};
	

    wstrb <= {`UMCTL2_PORT_NBYTES_0{1'b1}};
    wuser <= {AXI_USERW{1'b0}};
    //read
    arid <= {4{1'b0}};
    arvalid <= {1{1'b0}};
    araddr <= {32{1'b0}};
    arlen <= {8{1'b0}};
    arsize <= {AXI_SIZEW{1'b0}};
    arburst <= {AXI_BURSTW{1'b0}};
    arcache <= {AXI_CACHEW{1'b0}};
   
    arlock <= {`UMCTL2_AXI_LOCK_WIDTH_0{1'b0}};
    arprot <= {AXI_PROTW{1'b0}};
    aruser <= {AXI_USERW{1'b0}};
    arqos <= {AXI_QOSW{1'b0}};
    arpoison <= {1{1'b0}};
    arregion <= {`UMCTL2_AXI_REGION_WIDTH{1'b0}};
    arurgent <= {1{1'b0}};
    rready <= 1'b0;
  end
  else begin
    if(1) begin
      if(axiWrStage) begin
        if(axiWrStatus==`WR_STAT_IDLE) begin //aw
          axiWrStatus <= `WR_STAT_WADDR;
          awid <= 12'h0;
          awvalid <= 1'b1;
          awaddr <= axiAwaddr;
          //awlen <= 8'h03;
          awlen <= 8'h1;
		     //awlen <= 8'h07;//8 burst len
          //awsize <= 3'h3;//64bit(8Byte)
          awsize <= 3'h2;
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
              axiWdata <= axiWdata + 32'h00000008;
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
          //arlen <=8'h03;
          //arlen <= 8'h07;//8 burst len
          arlen <= 8'h1;
		      //arsize <= 3'h3;//64bit(8Byte)
          arsize <= 3'h2;
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
              axiRdata <= axiRdata + 32'h00000008;
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
//assign aclk_i= axiClk;

initial begin
    PCLK = 0;
    PRESETn = 0;
    #10
    PRESETn = 1;
    PSEL = 0;
    //#10
   // Write;
   //PSEL = 0;
  //  #20
  //  Read;
   // #10000; 
  end
always #1 PCLK =  ~PCLK;

assign clk_i = axiClk;
initial begin
	rst_i <= 0;
	axiClk <=0;
 #100
 rst_i <= 1;
end
always begin 
	#10.00 axiClk = ~axiClk;
end 


/*
initial begin
  $display("start fsdb!!!");
  $fsdbDumpfile("ddr_system.fsdb");
  $fsdbDumpvars(0,ddr_system);
end
*/

initial begin
  $display("start vpd!!!");
  $vcdpluson;//ok
end


always@(posedge axiTestOver) begin
  #400
  $display("Test Over!!!");
  $finish;
end

endmodule

