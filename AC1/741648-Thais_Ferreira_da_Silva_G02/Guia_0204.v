/*
 Guia_0204
 Thaís Ferreira da Silva - 741648
*/
module Guia_0204;
// define data
 real x = 0.625; // decimal
 reg [7:0] b = 8'b1010_0000 ; // binary
 reg [11:0] c = 12'b10100000 ; // binary
 integer q [3:0];
// actions
 initial
 begin : main
 $display ( "Guia_0204 - Tests" );

 b[7:6] = 0;
 b[5:4] = 2;
 b[3:2] = 1;
 b[1:0] = 3;
 $display ( "a = %2b.%2b%2b%2b (2)",b[7:6],b[5:4],b[3:2],b[1:0]);

 c[11:8] = 4'h2;
 c[7:4] = 4'hd;
 c[3:0] = 4'h7;
 $display ( "b = 0.%2d%2d%2d%2d%2d%2d (4)",c[11:10],c[9:8],c[7:6],c[5:4],c[3:2],c[1:0]); 

 c = 0;
 c[8:6] = 3'o7;
 c[5:3] = 3'o1;
 c[2:0] = 3'o4;

 $display ( "c = 0.%2b%2b%2b (2)", c[8:6],c[5:3],c[2:0]);

 c = 12'b111;
 b = 8'b10001100 ; // binary
 q[3] = b[7:6];
 q[2] = b[5:4];
 q[1] = b[3:2];
 q[0] = b[1:0];
 $display ( "d = %2d%2d.%2d%2d%2d%2d (4)",c[3:2],c[1:0], q[3] ,q[2] ,q[1] ,q[0] );

 c = 12'b10101100;
 b = 8'b10000001 ; // binary
 q[3] = b[7:6];
 q[2] = b[5:4];
 q[1] = b[3:2];
 q[0] = b[1:0];
 $display ( "e = %2d%2d.%2d%2d%2d%2d%2d%2d (4)",c[7:6],c[5:4],c[3:2],c[1:0], q[3] ,q[2] ,q[1] ,q[0] );



 end // main
endmodule // Guia_0204