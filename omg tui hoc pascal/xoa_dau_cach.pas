uses crt;

var
  s: string;
  tam, d, i: Integer;

begin
  readln(s);
  tam := 0;


  while s[1] = ' ' do
    Delete(s, 1, 1);

  while s[Length(s)] = ' ' do
    Delete(s, Length(s), 1);


  while Pos('  ', s) > 0 do
    Delete(s, Pos('  ', s), 1);

  for i := 1 to Length(s) do
    if ((s[i] >= 'A') and (s[i] <= 'Z')) or ((s[i] >= 'a') and (s[i] <= 'z')) then
      Inc(d);
  upcase(s,1,1);

  writeln(s);
  writeln(d);

  readln;
end.
