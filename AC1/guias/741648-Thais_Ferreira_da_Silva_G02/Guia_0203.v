/*
 Guia_0203
 Thaís Ferreira da Silva - 741648
*/
module Guia_0203;
// define data
 real x = 0.625; // decimal
 reg [7:0] b = 8'b1010_0000 ; // binary
// actions
 initial
 begin : main
 $display ( "Guia_0203 - Tests" );

 b = 8'b00_011001 ; // binary
 $display ( "a = 0.%x%x%x (4) ",b[5:4],b[3:2],b[1:0] );

 b = 8'b00_100111 ; // binary
 $display ( "b = 0.%o%o (8) ",b[5:3],b[2:0] );

 b = 8'b10111000 ; // binary
 $display ( "c = 0.%h%h (16) ",b[7:4],b[3:0] );

 b = 8'b01_110001 ; // binary
 $display ( "d = %o.%o%o (8) ",b[7:6],b[5:3],b[2:0] );

 b = 8'b0101_1001 ; // binary
 $display ( "e = %h.%h (16) ",b[7:4],b[3:0] );


 end // main
endmodule // Guia_0203