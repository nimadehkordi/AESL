
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Exercise2 -dir "C:/Projects/Exercise2/planAhead_run_2" -part xc6slx45fgg676-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "writeText.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {lcdController.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {debounce.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {writeText.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top writeText $srcset
add_files [list {writeText.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx45fgg676-3
