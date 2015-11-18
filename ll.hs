import System.Environment

ll_step :: Integer -> Integer -> Integer -> Integer
ll_step exp 0 n = 4
ll_step exp i n = mod ((ll_step exp (i-1) n)^2 - 2) n

ll :: Integer -> Bool
ll 0 = False
ll 1 = False
ll 2 = True
ll exp = ll_step exp (exp-2) (2^exp-1) == 0

main = do
  arg <- getArgs
  let n = (read (head arg) :: Integer)
  let output = "2^" ++ show n ++ " - 1 is "
  if ll n then putStrLn (output ++ "prime") else putStrLn (output ++ "not prime")