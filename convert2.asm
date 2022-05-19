%define input RDI
%define output RSI
global conv_ULongToChar2
conv_ULongToChar2:
    mov [RSI],RDI
    fild QWORD[RSI]
    FBSTP [RSI]
    ret


