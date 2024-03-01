
type
  mang = record
    a, b, c: Integer;
  end;

var
  inf, ouf: Text;
  n, e, p, i: Integer;
  v: array of mang;

procedure sort(var arr: array of mang; n: Integer);
var
  i, j: Integer;
  temp: mang;
begin
  for i := 0 to n - 2 do
  begin
    for j := 0 to n - i - 2 do
    begin
      if arr[j].b > arr[j + 1].b then
      begin
        temp := arr[j];
        arr[j] := arr[j + 1];
        arr[j + 1] := temp;
      end;
    end;
  end;
end;

begin
  Assign(inf, 'REHALL.INP');Assign(ouf, 'REHALL.OUT');
  Reset(inf);
  Rewrite(ouf);
  ReadLn(inf, n);
  SetLength(v, n);
  for i := 0 to n - 1 do
  begin
    ReadLn(inf, v[i].a, v[i].b, v[i].c);
  end;

  sort(v, n);

  e := 0;
  p := 0;
  for i := 0 to n - 1 do
  begin
    if v[i].a >= p then
    begin
      e := e + v[i].c;
      p := v[i].b;
    end;
  end;

  WriteLn(ouf, e);

  Close(inf);
  Close(ouf);
end.
