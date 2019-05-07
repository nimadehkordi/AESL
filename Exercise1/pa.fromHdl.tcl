
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Exercise1 -dir "C:/Projects/Exercise1/planAhead_run_2" -part xc6slx45fgg676-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "ledBlinker.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {led.vhdl}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {frequencyController.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {wholeDesign.vhf}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top wholeDesign $srcset
add_files [list {ledBlinker.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx45fgg676-3
