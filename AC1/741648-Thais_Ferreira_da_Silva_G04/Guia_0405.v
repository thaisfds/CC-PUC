/*
Guia_0405
Thaís Ferreira da Silva - 741648
*/

module SoPA (output s, input x, y);// mintermos
    assign s = (~x&~y) |(~x&y) |(x&y);
endmodule // SoP Letra A

module SoPB (output s, input x, y);// mintermos
    assign s = (~x&~y) | (x&~y) | (x&y);
endmodule // SoP Letra B

module SoPC (output s, input x, y, z);// mintermos
    assign s = (~x&~y&~z) | (~x&y&~z) | (x&~y&~z) | (x&y&z);
endmodule // SoP Letra C

module SoPD (output s, input x, y, z);// mintermos
    assign s = (~x&~y&~z) | (~x&y&~z) | (~x&y&z) | (x&y&~z);
endmodule // SoP Letra D

module SoPE (output s, input x, y, w, z);// mintermos
    assign s = (~x&~y&~w&~z) | (~x&~y&~w&z) | (~x&~y&w&z) | (~x&y&~w&~z) | (~x&y&~w&z) | (~x&y&w&z) | (x&~y&~w&~z) | (x&~y&w&~z) | (x&y&~w&z) | (x&y&w&z);
endmodule // SoP Letra E

module PoSA (output s, input x, y);// MAXTERMOS
    assign s = (~x|y);
endmodule // SoP Letra A

module PoSB (output s, input x, y);// MAXTERMOS
    assign s = (x|~y);
endmodule // SoP Letra B

module PoSC (output s, input x, y, z);// MAXTERMOS
    assign s = (x|y|~z) & (x|~y|~z) & (~x|y|~z) & (~x|~y|z);
endmodule // SoP Letra C

module PoSD (output s, input x, y, z);// MAXTERMOS
    assign s = (x|y|~z) & (~x|y|z) & (~x|y|~z) & (~x|~y|~z);
endmodule // SoP Letra D

module PoSE (output s, input x, y, w, z);// MAXTERMOS
    assign s = (x|y|~w|z) & (x|~y|~w|z) & (~x|y|w|~z) & (~x|y|~w|~z) & (~x|~y|w|z) & (~x|~y|~w|z);
endmodule // SoP Letra E

module Guia_0405;
reg x, y, w, z;
wire a1, a2, b1, b2, c1, c2, d1, d2, e1, e2;

// instancias

SoPA FXY1 (a1, w, z);
SoPB FXY2 (b1, w, z);
SoPC FXYZ1 (c1, y, w, z);
SoPD FXYZ2 (d1, y, w, z);
SoPE FXYWZ1 (e1, x, y, w, z);


PoSA FXY3 (a2, w, z);
PoSB FXY4 (b2, w, z);
PoSC FXYZ3 (c2, y, w, z);
PoSD FXYZ4 (d2, y, w, z);
PoSE FXYWZ2 (e2, x, y, w, z);

// valores iniciais
initial begin: start
x=1'bx; y=1'bx; w=1'bx; z=1'bx;// indefinidos
end

// parte principal
initial begin: main

// identificacao
$display("\nGuia_0404- Thaís Ferreira da Silva - 741648");


// monitoramento
$display(" x  y  w  z =  SoP-A PoS-A SoP-B PoS-B SoP-C PoS-C SoP-D PoS-D SoP-E PoS-E\n");
$monitor("%2b %2b %2b %2b =   %2b    %2b    %2b    %2b    %2b    %2b    %2b    %2b    %2b    %2b", x, y, w, z, a1, a2, b1, b2, c1, c2, d1, d2, e1, e2);

// sinalizacao
#1 x=0; y=0; w=0; z=0;
#1 x=0; y=0; w=0; z=1;
#1 x=0; y=0; w=1; z=0;
#1 x=0; y=0; w=1; z=1;
#1 x=0; y=1; w=0; z=0;
#1 x=0; y=1; w=0; z=1;
#1 x=0; y=1; w=1; z=0;
#1 x=0; y=1; w=1; z=1;
#1 x=1; y=0; w=0; z=0;
#1 x=1; y=0; w=0; z=1;
#1 x=1; y=0; w=1; z=0;
#1 x=1; y=0; w=1; z=1;
#1 x=1; y=1; w=0; z=0;
#1 x=1; y=1; w=0; z=1;
#1 x=1; y=1; w=1; z=0;
#1 x=1; y=1; w=1; z=1;
end
endmodule // Guia_0405