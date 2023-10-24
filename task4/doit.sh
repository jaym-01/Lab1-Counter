sudo rm -r obj_dir
sudo rm counter.vcd

verilator -Wall --cc --trace counter.sv --exe top_tb.cpp
verilator -Wall --cc --trace bin2bcd.sv --exe top_tb.cpp
verilator -Wall --cc --trace top.sv --exe top_tb.cpp

make -j -C obj_dir/ -f Vtop.mk Vtop

# require super user privledges to access port
sudo obj_dir/Vtop