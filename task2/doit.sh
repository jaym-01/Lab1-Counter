sudo rm -r obj_dir
sudo rm counter.vcd

verilator -Wall --cc --trace counter.sv --exe counter_tb.cpp

make -j -C obj_dir/ -f Vcounter.mk Vcounter

sudo obj_dir/Vcounter