class TreeNode {
    int val;
    TreeNode left, right;
    TreeNode(int x) { val = x; }
}

public class Tree {
    public static void main(String[] args) {
        TreeNode root = new TreeNode(10);
        TreeNode c1 = new TreeNode(20);
        TreeNode c2 = new TreeNode(30);
        root.left = c1; 
        root.right = c2;

        TreeNode c3 = new TreeNode(40);
        TreeNode c4 = new TreeNode(50);
        c1.left = c3; 
        c1.right = c4;

        TreeNode c5 = new TreeNode(60);
        TreeNode c6 = new TreeNode(70);
        c2.left = c5; 
        c2.right = c6;

        // Example: Print root's left and right children
        System.out.println("Root: " + root.val);
        System.out.println("Left child: " + root.left.val);
        System.out.println("Right child: " + root.right.val);
    }
}