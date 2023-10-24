module counter #(
    parameter WIDTH = 8
)(
    // interface signals
    input logic clk,   // clock
    input logic rst,   //reset
    input logic en,    //counter enable
    output logic [WIDTH-1:0] count //count output
);

// when asynchronous -> it changes before the rising edge of the clock
// but does not change when the rst changes -> since it is non blocking
always_ff @ (posedge clk)
    if(rst) count <= {WIDTH{1'b0}};  // when rst = 1 -> cout = 0000_0000
    else count <= count + {{WIDTH-1{1'b0}}, en}; // does count + 1 -> when en = 1

endmodule
