/*
Guia_0104.v
Thaís Ferreira da Silva - 741648
*/
module Guia_0104;
// define data
integer x1 = 0; // decimal
reg [7:0] b1 = 8'b011011; // binary (bits)

integer x2 = 0; // decimal
reg [7:0] b2 = 8'b010101; // binary (bits)

integer x3 = 0; // decimal
reg [7:0] b3 = 8'b101111; // binary (bits)

integer x4 = 0; // decimal
reg [7:0] b4 = 8'b100101; // binary (bits)

integer x5 = 0; // decimal
reg [7:0] b5 = 8'b111011; // binary (bits)

// actions
initial
begin : main
$display ( "Guia_0104 - Tests" );

$display ( "Letra a:" );
$display ( "b1 = [%2b] [%2b] [%2b] = %x %x %x", b1[5:4], b1[3:2], b1[1:0], b1[5:4], b1[3:2], b1[1:0] );

$display ( "Letra b:" );
$display ( "b2 = [%3b] [%3b] = %x %x", b2[5:3], b2[2:0], b2[5:3], b2[2:0] );

$display ( "Letra c:" );
$display ( "b3 = [%4b] [%4b] = %x %x", b3[7:4], b3[3:0], b3[7:4], b3[3:0] );

$display ( "Letra d:" );
$display ( "b4 = [%3b] [%3b] = %x %x", b4[5:3], b4[2:0], b4[5:3], b4[2:0] );

$display ( "Letra e:" );
$display ( "b5 = [%2b] [%2b] [%2b] = %x %x %x", b5[5:4], b5[3:2], b5[1:0], b5[5:4], b5[3:2], b5[1:0] );

end // main
endmodule // Guia_0104
