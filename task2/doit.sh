sudo rm -r obj_dir
sudo rm counter.vcd

verilator -Wall --cc --trace counter.sv --exe counter_tb.cpp

make -j -C obj_dir/ -f Vcounter.mk Vcounter

# require super user to access the port
# without sudo error unable to open port will be recieved 
sudo obj_dir/Vcounter