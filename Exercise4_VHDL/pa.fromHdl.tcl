
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Exercise4 -dir "C:/Projects/Exercise4/planAhead_run_3" -part xc6slx45fgg676-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "blinkingLed.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {lcd_connect.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top lcd_connect $srcset
add_files [list {blinkingLed.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx45fgg676-3
