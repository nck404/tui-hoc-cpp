var
  a1,a2,b1,b2,newtu1,newtu2,mauchung,sumtu:Integer;
function gcd(a, b: Integer): Integer;
var temp: Integer;
begin
  while b <> 0 do
  begin
    temp := b;
    b := a mod b;
    a := temp;
  end;
  gcd := a;
end;
function lcm(a, b: Integer): Integer;
begin
  lcm := (a * b) div gcd(a, b);
end;
procedure toi_gian_ps(var tu, mau: Integer);
var
  mauchung: Integer;
begin
  mauchung := gcd(tu, mau);
  tu := tu div mauchung;
  mau := mau div mauchung;
end;
begin
  Readln(a1,a2);
  Readln(b1,b2);
  mauchung := lcm(a2, b2);
  Writeln(mauchung);
  newtu1 := a1 * (mauchung div a2);
  newtu2 := b1 * (mauchung div b2);
  Write(newtu1,'/',mauchung,' ');
  Writeln(newtu2,'/',mauchung);
  sumtu := newtu1 + newtu2;
  toi_gian_ps(sumtu,mauchung);
  Write(sumtu,'/',mauchung);
end.
