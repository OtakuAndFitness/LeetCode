/**Given a binary tree, find its minimum depth.
 *
 *The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

public class Solution {
    public int minDepth(TreeNode root) {
        if (root==null){
            return 0;
        }
        if (root.left==null && root.right==null){
            return 1;
        }
        int l=minDepth(root.left);
        int r=minDepth(root.right);
        if (l>0 && r>0)
            return 1+Math.min(l,r);
        else
            return l+r+1;
    }
}
