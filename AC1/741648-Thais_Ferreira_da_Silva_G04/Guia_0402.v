/*
Guia_0402
Thaís Ferreira da Silva - 741648
*/

module fxyz (output s1, output s2, input x, y, z);
    assign s1 = (~x | ~y ) & (~x | ~z);
    assign s2 = ~x | (~y & ~z);
endmodule // fxyz

module fxyzA (output s1, output s2, input x, y);
    assign s1 = ~x & ~( x | ~y );
    assign s2 = ~x & y;
endmodule // letra a

module fxyzB (output s1, output s2, input x, y);
    assign s1 = ( x | ~y ) | ( x & y );
    assign s2 = ~y | x;
endmodule // letra b

module fxyzC (output s1, output s2, input x, y);
    assign s1 = ~( x & ~y ) & ( x | ~y );
    assign s2 = y;
endmodule // letra c

module fxyzD (output s1, output s2, input x, y);
    assign s1 = ~( ~x & y ) | ~( ~x | y );
    assign s2 = x|~y;
endmodule // letra d

module fxyzE (output s1, output s2, input x, y);
    assign s1 = ~( y | ~x ) & ( y | ~x );
    assign s2 = 0;
endmodule // letra e

module Guia_0402;
reg x, y, z;
wire a1, a2, b1, b2, c1, c2, d1, d2, e1, e2;

// instancias
fxyzA FXY2 (a1, a2, x, y);
fxyzB FXY3 (b1, b2, x, y);
fxyzC FXY4 (c1, c2, x, y);
fxyzD FXY5 (d1, d2, x, y);
fxyzE FXY6 (e1, e2, x, y);

// valores iniciais
initial begin: start
x=1'bx; y=1'bx;// indefinidos
end

// parte principal
initial begin: main

// identificacao
$display("\nGuia_0402- Thaís Ferreira da Silva - 741648");
$display("a: x' . ( x + y' )'");
$display("b: ( x + y' ) + ( x . y )");
$display("c: ( x . y' )' . ( x + y' )");
$display("d: ( x' . y )' + ( x' + y )'");
$display("e: ( y + x' )' . ( y + x' )\n");


// monitoramento
$display(" x  y =  a1 a2 b1 b2 c1 c2 d1 d2 e1 e2\n");
$monitor("%2b %2b = %2b %2b %2b %2b %2b %2b %2b %2b %2b %2b", x, y, a1, a2, b1, b2, c1, c2, d1, d2, e1, e2);

// sinalizacao
#1 x=0; y=0;
#1 x=0; y=0;
#1 x=0; y=1;
#1 x=0; y=1;
#1 x=1; y=0;
#1 x=1; y=0;
#1 x=1; y=1;
#1 x=1; y=1;
end
endmodule // Guia_0402