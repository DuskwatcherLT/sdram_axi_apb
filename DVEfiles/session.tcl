# Begin_DVE_Session_Save_Info
# DVE reload session
# Saved on Tue Aug 27 21:54:54 2019
# Designs open: 2
#   V1: /home/liutong/Documents/sdram_system/vcdplus.vpd
#   V2: /home/tangdan/Documents/riscv-ddr/vcdplus.vpd
# Toplevel windows open: 2
# 	TopLevel.1
# 	TopLevel.2
#   Source.1: V1:ddr_system
#   Wave.1: 12 signals
#   Group count = 8
#   Group Group1 signal count = 3
#   Group Group2 signal count = 13
#   Group Group3 signal count = 5
#   Group Group4 signal count = 1
#   Group Group5 signal count = 1
#   Group Group6 signal count = 1
#   Group Group7 signal count = 9
#   Group Group8 signal count = 3
# End_DVE_Session_Save_Info

# DVE version: I-2014.03
# DVE build date: Feb 27 2014 20:56:47


#<Session mode="Reload" path="/home/liutong/Documents/sdram_system/DVEfiles/session.tcl" type="Debug">

gui_set_loading_session_type Reload
gui_continuetime_set

# Close design
if { [gui_sim_state -check active] } {
    gui_sim_terminate
}
gui_close_db -all
gui_expr_clear_all
gui_clear_window -type Wave
gui_clear_window -type List

# Application preferences
gui_set_pref_value -key app_default_font -value {Helvetica,10,-1,5,50,0,0,0,0,0}
gui_src_preferences -tabstop 8 -maxbits 24 -windownumber 1
#<WindowLayout>

# DVE top-level session


# Create and position top-level window: TopLevel.1

set TopLevel.1 TopLevel.1

# Docked window settings
set HSPane.1 HSPane.1
set Hier.1 Hier.1
set DLPane.1 DLPane.1
set Data.1 Data.1
set Console.1 Console.1
gui_sync_global -id ${TopLevel.1} -option true

# MDI window settings
set Source.1 Source.1
gui_update_layout -id ${Source.1} {{show_state maximized} {dock_state undocked} {dock_on_new_line false}}

# End MDI window settings


# Create and position top-level window: TopLevel.2

set TopLevel.2 TopLevel.2

# Docked window settings
gui_sync_global -id ${TopLevel.2} -option true

# MDI window settings
set Wave.1 Wave.1
gui_update_layout -id ${Wave.1} {{show_state maximized} {dock_state undocked} {dock_on_new_line false} {child_wave_left 477} {child_wave_right 1165} {child_wave_colname 236} {child_wave_colvalue 237} {child_wave_col1 0} {child_wave_col2 1}}

# End MDI window settings


#</WindowLayout>

#<Database>

# DVE Open design session: 

if { ![gui_is_db_opened -db {/home/liutong/Documents/sdram_system/vcdplus.vpd}] } {
	gui_open_db -design V1 -file /home/liutong/Documents/sdram_system/vcdplus.vpd -nosource
}
if { ![gui_is_db_opened -db {/home/tangdan/Documents/riscv-ddr/vcdplus.vpd}] } {
	gui_open_db -design V2 -file /home/tangdan/Documents/riscv-ddr/vcdplus.vpd -nosource
}
gui_set_precision 1ps
gui_set_time_units 1ns
#</Database>

# DVE Global setting session: 


# Global: Bus

# Global: Expressions

# Global: Signal Time Shift

# Global: Signal Compare

# Global: Signal Groups
gui_load_child_values {V1:ddr_system.u_sdram.u_core}
gui_load_child_values {V1:ddr_system.u_sdram.u_axi}


set _session_group_29 Group1
gui_sg_create "$_session_group_29"
set Group1 "$_session_group_29"

gui_sg_addsignal -group "$_session_group_29" { V1:ddr_system.dq V1:ddr_system.sdram_data_in_w V1:ddr_system.sdram_we_o }

set _session_group_30 Group2
gui_sg_create "$_session_group_30"
set Group2 "$_session_group_30"

gui_sg_addsignal -group "$_session_group_30" { V1:ddr_system.u_sdram.u_axi.wr_w V1:ddr_system.u_sdram.u_axi.write_active_w V1:ddr_system.axiWdata V1:ddr_system.awready V1:ddr_system.axiWrStatus V1:ddr_system.axiAwaddr V1:ddr_system.wready V1:ddr_system.u_sdram.u_axi.axi_wvalid_i V1:ddr_system.axiRdata V1:ddr_system.burstLen V1:ddr_system.rvalid V1:ddr_system.sdram_cas_o V1:ddr_system.axiWrStage }

set _session_group_31 Group3
gui_sg_create "$_session_group_31"
set Group3 "$_session_group_31"

gui_sg_addsignal -group "$_session_group_31" { V1:ddr_system.dq V1:ddr_system.sdram_data_in_w V1:ddr_system.wdata_0 V1:ddr_system.sdram_data_out_w V1:ddr_system.Dq_0 }

set _session_group_32 Group4
gui_sg_create "$_session_group_32"
set Group4 "$_session_group_32"

gui_sg_addsignal -group "$_session_group_32" { V1:ddr_system.awready }

set _session_group_33 Group5
gui_sg_create "$_session_group_33"
set Group5 "$_session_group_33"

gui_sg_addsignal -group "$_session_group_33" { V1:ddr_system.wdata_0 }

set _session_group_34 Group6
gui_sg_create "$_session_group_34"
set Group6 "$_session_group_34"

gui_sg_addsignal -group "$_session_group_34" { V1:ddr_system.sdram_data_out_w }

set _session_group_35 Group7
gui_sg_create "$_session_group_35"
set Group7 "$_session_group_35"

gui_sg_addsignal -group "$_session_group_35" { V1:ddr_system.sdram_data_out_w V1:ddr_system.Dq_0 V1:ddr_system.sdram_we_o V1:ddr_system.sdram_data_in_w V1:ddr_system.u_sdram.u_core.ram_req_w V1:ddr_system.u_sdram.u_axi.wr_w V1:ddr_system.u_sdram.u_axi.axi_wvalid_i V1:ddr_system.u_sdram.u_core.ram_req_w V1:ddr_system.u_sdram.u_axi.read_active_w }

set _session_group_36 Group8
gui_sg_create "$_session_group_36"
set Group8 "$_session_group_36"

gui_sg_addsignal -group "$_session_group_36" { V1:ddr_system.u_sdram.u_axi.write_active_w V1:ddr_system.u_sdram.u_axi.ram_accept_i V1:ddr_system.awaddr }

# Global: Highlighting

# Global: Stack
gui_change_stack_mode -mode list

# Post database loading setting...

# Restore C1 time
gui_set_time -C1_only 10



# Save global setting...

# Wave/List view global setting
gui_cov_show_value -switch false

# Close all empty TopLevel windows
foreach __top [gui_ekki_get_window_ids -type TopLevel] {
    if { [llength [gui_ekki_get_window_ids -parent $__top]] == 0} {
        gui_close_window -window $__top
    }
}
gui_set_loading_session_type noSession
# DVE View/pane content session: 


# Hier 'Hier.1'
gui_show_window -window ${Hier.1}
gui_list_set_filter -id ${Hier.1} -list { {Package 1} {All 0} {Process 1} {VirtPowSwitch 0} {UnnamedProcess 1} {UDP 0} {Function 1} {Block 1} {OVA Unit 1} {LeafScCell 1} {LeafVlgCell 1} {Interface 1} {LeafVhdCell 1} {$unit 1} {NamedBlock 1} {Task 1} {VlgPackage 1} {ClassDef 1} {VirtIsoCell 0} }
gui_list_set_filter -id ${Hier.1} -text {*} -force
gui_change_design -id ${Hier.1} -design V1
catch {gui_list_select -id ${Hier.1} {V1:ddr_system}}
gui_view_scroll -id ${Hier.1} -vertical -set 0
gui_view_scroll -id ${Hier.1} -horizontal -set 0

# Data 'Data.1'
gui_list_set_filter -id ${Data.1} -list { {Buffer 1} {Input 1} {Others 1} {Linkage 1} {Output 1} {LowPower 1} {Parameter 1} {All 1} {Aggregate 1} {LibBaseMember 1} {Event 1} {Assertion 1} {Constant 1} {Interface 1} {BaseMembers 1} {Signal 1} {$unit 1} {Inout 1} {Variable 1} }
gui_list_set_filter -id ${Data.1} -text {axiRdStage}
gui_list_show_data -id ${Data.1} {V1:ddr_system}
gui_show_window -window ${Data.1}
catch { gui_list_select -id ${Data.1} {V1:ddr_system.axiRdStage }}
gui_view_scroll -id ${Data.1} -vertical -set 0
gui_view_scroll -id ${Data.1} -horizontal -set 0
gui_view_scroll -id ${Hier.1} -vertical -set 0
gui_view_scroll -id ${Hier.1} -horizontal -set 0

# Source 'Source.1'
gui_src_value_annotate -id ${Source.1} -switch false
gui_set_env TOGGLE::VALUEANNOTATE 0
gui_open_source -id ${Source.1}  -replace -active V1:ddr_system /home/liutong/Documents/sdram_system/../sdram_system/ddr_system.v
gui_view_scroll -id ${Source.1} -vertical -set 7398
gui_src_set_reusable -id ${Source.1}

# View 'Wave.1'
gui_wv_sync -id ${Wave.1} -switch false
set groupExD [gui_get_pref_value -category Wave -key exclusiveSG]
gui_set_pref_value -category Wave -key exclusiveSG -value {false}
set origWaveHeight [gui_get_pref_value -category Wave -key waveRowHeight]
gui_list_set_height -id Wave -height 25
set origGroupCreationState [gui_list_create_group_when_add -wave]
gui_list_create_group_when_add -wave -disable
gui_wv_zoom_timerange -id ${Wave.1} 9.406 10.595
gui_list_add_group -id ${Wave.1} -after {New Group} {Group7}
gui_list_add_group -id ${Wave.1} -after {New Group} {Group8}
gui_list_select -id ${Wave.1} {V1:ddr_system.awaddr }
gui_seek_criteria -id ${Wave.1} {Any Edge}



gui_set_env TOGGLE::DEFAULT_WAVE_WINDOW ${Wave.1}
gui_set_pref_value -category Wave -key exclusiveSG -value $groupExD
gui_list_set_height -id Wave -height $origWaveHeight
if {$origGroupCreationState} {
	gui_list_create_group_when_add -wave -enable
}
if { $groupExD } {
 gui_msg_report -code DVWW028
}
gui_list_set_filter -id ${Wave.1} -list { {Buffer 1} {Input 1} {Others 1} {Linkage 1} {Output 1} {Parameter 1} {All 1} {Aggregate 1} {LibBaseMember 1} {Event 1} {Assertion 1} {Constant 1} {Interface 1} {BaseMembers 1} {Signal 1} {$unit 1} {Inout 1} {Variable 1} }
gui_list_set_filter -id ${Wave.1} -text {*}
gui_list_set_insertion_bar  -id ${Wave.1} -group Group8  -item {V1:ddr_system.awaddr[31:0]} -position below

gui_marker_move -id ${Wave.1} {C1} 10
gui_view_scroll -id ${Wave.1} -vertical -set 0
gui_show_grid -id ${Wave.1} -enable false
# Restore toplevel window zorder
# The toplevel window could be closed if it has no view/pane
if {[gui_exist_window -window ${TopLevel.2}]} {
	gui_set_active_window -window ${TopLevel.2}
	gui_set_active_window -window ${Wave.1}
}
if {[gui_exist_window -window ${TopLevel.1}]} {
	gui_set_active_window -window ${TopLevel.1}
	gui_set_active_window -window ${Source.1}
	gui_set_active_window -window ${DLPane.1}
}
#</Session>

