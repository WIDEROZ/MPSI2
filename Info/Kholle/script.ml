let transpose m = 
  for i = 0 to 1 do
    for j = 0 to 1 do
      let tmp = m.(i).(j) in
      m.(i).(j) <- m.(j).(i);
      m.(j).(i) <- tmp
    done;
  done;
  m


;;

transpose [|[|0; 1|]; [|2; 3|]|] ;;

