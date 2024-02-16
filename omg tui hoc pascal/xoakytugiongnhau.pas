Uses crt;
Var i,j,n: integer;
S: string;
Begin
	Clrscr;
	Write(': '); Readln(S);
	N:=length(S);
	i:=1;
	While i<n do
	Begin
		J:=i+1;
		While j<=n do
		Begin
			If S[i]=S[j] then
			Begin
			Delete(S,j,1);
			N:=n-1;
			End
		Else j:=j+1;
		End;
		I:=i+1;
	End;
	Writeln(': ',S);
End.