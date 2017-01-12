-- A tree either null or a node with left pointer, right 
-- pointer, and key.
data Tree a = Nil 
            | Node { left  :: Tree a,
                     key   :: a,
                     right :: Tree a }
            deriving (Show)


-- Construct a list from an in-order traveral. The list should 
-- contain nothing if the tree is empty, otherwise append the 
-- left-side to the key to the right-side lists.
inOrder :: Tree a -> [a]
inOrder (Nil) = []
inOrder (Node left key right) =  
        (inOrder left) ++ [key] ++ (inOrder right)


-- If the tree has nothing, but the target at the root node;
-- else if the target is less than the current key, insert
-- it to the left; else to the right.
insert :: Ord a => Tree a -> a -> Tree a
insert (Nil)                 x = Node Nil x Nil
insert (Node left key right) x 
       | x  < key  = (Node (insert left x) key right)
       | otherwise = (Node left            key (insert right x))


-- Use this function to insert a whole list of keys into
-- a tree.
xinsert :: Ord a => Tree a -> [a] -> Tree a
xinsert t []     = t
xinsert t (x:xs) = (insert (xinsert t xs) x)


-- The height of a tree is equal to 1 plus the maximum of the
-- heights of the left and right subtrees; if the tree has no
-- nodes, its height is zero.
height :: Tree a -> Int
height (Nil) = 0
height (Node left key right) = 
   1 + (max (height left) (height right))


-- To make a tree, use the xinsert function to insert keys
-- into a Nil node.
main = do
    let s = xinsert Nil [7,5,13,2,3,11,17]
    print (inOrder s)

