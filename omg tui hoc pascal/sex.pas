program InSoNguyenTo;

function IsPrime(n: Integer): Boolean;
var
  i: Integer;
begin
  for i := 2 to Trunc(Sqrt(n)) do
  begin
    if n mod i = 0 then
    begin
      IsPrime := False;
      Exit;
    end;
  end;
  IsPrime := n > 1;
end;

procedure PrintPrimesUpToN(n: Integer);
var
  i: Integer;
begin
  writeln('Cac so nguyen to tu 1 den ', n, ' la:');
  for i := 1 to n do
  begin
    if IsPrime(i) then
      write(i, ' ');
  end;
end;

var
  n: Integer;

begin
  // Nhập n từ bàn phím
  write('Nhap so n: ');
  readln(n);

  // Gọi hàm in ra các số nguyên tố từ 1 đến n
  PrintPrimesUpToN(n);

  readln;
end.
