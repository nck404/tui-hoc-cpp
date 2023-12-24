var
 s, rvs, tam: string;
 i, tong, a: integer;

begin
  writeln('Nhap vao mot xau: ');
  readln(s);
  rvs := '';
  for i := length(s) downto 1 do
    rvs := rvs + s[i];
  tong := 0;
  tam := '';
  for i := 1 to length(rvs) do
  begin
    if (rvs[i] >= '0') and (rvs[i] <= '9') then
    begin
      tam := tam + rvs[i];
      if length(tam) = 3 then
      begin
        val(tam, a);
        tong := tong + a;
        tam := '';
      end;
    end
    else
    begin
      tam := '';
    end;
  end;
  writeln(tong);
end.
