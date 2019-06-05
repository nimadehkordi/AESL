
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Exercise3 -dir "C:/Projects/Exercise3/planAhead_run_1" -part xc6slx45fgg676-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "top_module.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {delay.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {I2C_slave.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {i2c_check.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {debounce.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {top_module.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top top_module $srcset
add_files [list {top_module.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx45fgg676-3
