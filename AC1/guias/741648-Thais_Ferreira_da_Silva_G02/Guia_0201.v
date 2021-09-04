/*
 Guia_0201
 Thaís Ferreira da Silva - 741648
*/
module Guia_0201;
// define data
 real x = 0 ; // decimal
 real power2 = 1.0; // power of 2
 integer y = 7 ; // counter
 integer z = 0 ; 
 reg [7:0] a = 8'b11101000; // binary (only fraction part, Big Endian)
 reg [7:0] b = 8'b01011000; // binary (only fraction part, Big Endian)
 reg [7:0] c = 8'b11001000; // binary (only fraction part, Big Endian)
 reg [7:0] d = 8'b10011000; // binary (only fraction part, Big Endian)
 reg [7:0] f = 8'b1; // binary (only fraction part, Big Endian)
 reg [7:0] e = 8'b11010000; // binary (only fraction part, Big Endian)
 reg [7:0] g = 8'b11; // binary (only fraction part, Big Endian)
 
// actions
 initial
 begin : main
 $display ( "Guia_0201 - Tests" );

 while ( y >= 0 ) begin
 power2 = power2 / 2.0;
 if ( a[y] == 1 ) begin
 x = x + power2;
 end
 y=y-1;
 end // end while
 $display ( "a = %f", x );

//----------------------------------------------------------------
 x = 0 ; // decimal
 power2 = 1.0; // power of 2
 y = 7 ; // counter

 while ( y >= 0 ) begin
 power2 = power2 / 2.0;
 if ( b[y] == 1 ) begin
 x = x + power2;
 end
 y=y-1;
 end // end while
 $display ( "b = %f", x );

//----------------------------------------------------------------
  x = 0 ; // decimal
 power2 = 1.0; // power of 2
 y = 7 ; // counter

 while ( y >= 0 ) begin
 power2 = power2 / 2.0;
 if ( c[y] == 1 ) begin
 x = x + power2;
 end
 y=y-1;
 end // end while
 $display ( "c = %f", x );

 //----------------------------------------------------------------
  x = 0 ; // decimal
 power2 = 1.0; // power of 2
 y = 7 ; // counter

 while ( y >= 0 ) begin
 power2 = power2 / 2.0;
 if ( d[y] == 1 ) begin
 x = x + power2;
 end
 y=y-1;
 end // end while
 z = f;
 $display ( "d = %f", x+f );

 //----------------------------------------------------------------
  x = 0 ; // decimal
 power2 = 1.0; // power of 2
 y = 7 ; // counter

 while ( y >= 0 ) begin
 power2 = power2 / 2.0;
 if ( e[y] == 1 ) begin
 x = x + power2;
 end
 y=y-1;
 end // end while
 z = g;
 $display ( "e = %f", x+g );


 end // main
endmodule // Guia_0201