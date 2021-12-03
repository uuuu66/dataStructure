
public class TreeNode{
	private TreeNode left=null;
	private int value=0;
	private TreeNode right=null;
	public TreeNode(int value) {
		this.value=value;
	}
	public int getValue() {
		return this.value;
	}
	public TreeNode getLeft() {
		return this.left;
	}
	public TreeNode getRight() {
		return this.right;
	}
	public void setLeft(TreeNode node) {
		this.left=node;
	}
	public void setRight(TreeNode node) {
		this.right=node;
	}
	public void removeLeft() {
		this.left=null;
	}
	public void removeRight() {
		this.right=null;
	}
	
}
