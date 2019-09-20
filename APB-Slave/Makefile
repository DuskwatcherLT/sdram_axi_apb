RTL_FLIST :=  ../APB-Slave/APB_Slave.v \
			  ../APB-Slave/APB_Slave_tb.v \

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

simv :
		${SIM_TOOL} ${SIM_OPTIONS}${RTL_FLIST}

all: simv 

.PHONY : clean
clean :
	rm -fr csrc simv.daidir simv ucli.key vcdplus.vpd DVEfiles INCA_libs
