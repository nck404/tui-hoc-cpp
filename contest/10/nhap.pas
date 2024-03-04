Program DemSoLuongXau;

Type
    Xau = String;

Var
    N: Byte;
    f1, f2: Text;

Procedure Sinh_ke_tiep(var st: Xau);
Var
    j: Byte;
Begin
    j := Length(st);
    While st[j] = '2' do
    Begin
        st[j] := '0';
        j := j - 1;
    End;
    st[j] := Chr(Ord(st[j]) + 1);
End;

Procedure Sinh_tp(n: Byte);
Var
    st: Xau;
    j: Byte;
Begin
    Assign(f1, 'INPUT.inp');
    Reset(f1);
    Assign(f2, 'OUTPUT.OUT');
    Rewrite(f2);
    Readln(f1, N);
    Close(f1);

    st := '';
    For j := 1 to N do
        st := st + '0';

    While (Pos('0', st) <> 0) and (Pos('1', st) <> 0) do
    Begin
        Writeln(f2, st);
        Sinh_ke_tiep(st);
    End;

    Close(f2);
End;

Begin
    Sinh_tp(N);
End.
