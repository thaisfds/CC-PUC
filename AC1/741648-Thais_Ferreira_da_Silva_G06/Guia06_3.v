// -------------------------
// Guia06_3
// Nome: Thaís Ferreira da Silva
// Matricula: 741648
// -------------------------


module f5a ( output s1, output s2, input w, input x, input y, input z );

assign m1 = ()&()&()&();
assign m2 = ()&()&()&();
assign m3 = ()&()&()&();
assign m4 = ()&()&()&();
assign m5 = ()&()&()&();
assign m6 = ()&()&()&();

assign s1 = ()|()|()|()|();
assign s2 = ()|()|()|()|();

endmodule // f5a

module f5b ( output s1, output s2, input w, input x, input y, input z );

assign m1 = ()&()&()&();
assign m2 = ()&()&()&();
assign m3 = ()&()&()&();
assign m4 = ()&()&()&();
assign m5 = ()&()&()&();
assign m6 = ()&()&()&();

assign s1 = ()|()|()|()|();
assign s2 = ()|()|()|()|();

endmodule // f5b

module f5c ( output s1, output s2, input w, input x, input y, input z );

endmodule // f5c

module f5d ( output s1, output s2, input w, input x, input y, input z );

endmodule // f5d

module f5e ( output s1, output s2, input w, input x, input y, input z );

endmodule // f5e

module test_f5;

reg x, y, w, z;

initial begin: start
w=1'bx; x=1'bx; y=1'bx; z=1'bx;// indefinidos
end

wire a1, b1, c1, d1, e1, a2, b2, c2, d2, e2;
f5a moduloA ( a1, a2, x, w, y, z );
f5b moduloB ( b1, b2, x, w, y, z );
f5c moduloC ( c1, c2, x, w, y, z );
f5d moduloD ( d1, d2, x, w, y, z );
f5e moduloE ( e1, e2, x, w, y, z );

initial begin : main

$display("Guia06_3 - Thaís Ferreira da Silva - 741648");
$display(" w  x  y  z =  a1  a2  b1  b2  c1 c2  d1  d2  e1  e2\n");
$monitor("%2b %2b %2b %2b = %2b %2b %2b %2b %2b %2b %2b %2b %2b %2b", w, x, y, z, a1, a2, b1, b2, c1, c2, d1, d2, e1, e2);

// sinalizacao
#1 w=0; x=0; y=0; z=0;
#1 w=0; x=0; y=0; z=1;
#1 w=0; x=0; y=1; z=0;
#1 w=0; x=0; y=1; z=1;
#1 w=0; x=1; y=0; z=0;
#1 w=0; x=1; y=0; z=1;
#1 w=0; x=1; y=1; z=0;
#1 w=0; x=1; y=1; z=1;
#1 w=1; x=0; y=0; z=0;
#1 w=1; x=0; y=0; z=1;
#1 w=1; x=0; y=1; z=0;
#1 w=1; x=0; y=1; z=1;
#1 w=1; x=1; y=0; z=0;
#1 w=1; x=1; y=0; z=1;
#1 w=1; x=1; y=1; z=0;
#1 w=1; x=1; y=1; z=1;
end
endmodule // test_f5