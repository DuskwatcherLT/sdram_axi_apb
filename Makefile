RTL_FLIST := ../sdram_system/ddr_system.v \
			 ../sdram_system/model/mt48lc8m16a2.v \
			 ../sdram_system/core_sdram_axi4/src_v/sdram_axi.v \
			 ../sdram_system/core_sdram_axi4/src_v/sdram_axi_core.v \
			 ../sdram_system/core_sdram_axi4/src_v/sdram_axi_pmem.v \
			# ../tb/tb_core.sv \
             ../model/IS42VM16400K.v \
             ../model/mt48lc2m32b2.v \
             ../model/mt48lc8m8a2.v  \
             ../../rtl/core/sdrc_core.v \
             ../../rtl/core/sdrc_bank_ctl.v \
             ../../rtl/core/sdrc_bank_fsm.v \
             ../../rtl/core/sdrc_bs_convert.v \
             ../../rtl/core/sdrc_req_gen.v \
             ../../rtl/core/sdrc_xfr_ctl.v #
NOVAS        := /opt/eda/Synopsys/Verdi2015/share/PLI/VCS/LINUX64
EXTRA        := -cpp g++-4.8 -cc gcc-4.8 -LDFLAGS -Wl,--no-as-needed -P ${NOVAS}/novas.tab ${NOVAS}/pli.a
SIM_TOOL     := vcs
SIM_OPTIONS  := -full64 -PP +v2k -timescale=1ns/10ps \
		${EXTRA} \
                -sverilog \
                +lint=TFIPC-L \
                -debug_all +vcd+vcdpluson \
		+define+S50 \
                +incdir+../../rtl/core \

simv : ${RTL_FLIST}
	${SIM_TOOL} ${SIM_OPTIONS} ${RTL_FLIST}

all: simv 

.PHONY : clean
clean :
	rm -fr csrc simv.daidir simv ucli.key vcdplus.vpd DVEfiles INCA_libs
