vector <int> zigZagTraversal(Node* root)
{
    vector<int>v;
    if(!root)
    {
        return v;
    }
	
	stack<Node*>s1;
	stack<Node*>s2;
	s1.push(root);
	while(s1.size()>0||s2.size()>0)
	{
	    int count1=s1.size();
	    while(count1--)
	    {
	        root=s1.top();
	        v.push_back(root->data);
	        s1.pop();
	        if(root->left)
	        {
	            s2.push(root->left);
	        }
	        if(root->right)
	        {
	            s2.push(root->right);
	        }
	    }
	    int count2=s2.size();
	    while(count2--)
	    {
	        root=s2.top();
	        v.push_back(root->data);
	        s2.pop();
	        if(root->right)
	        {
	            s1.push(root->right);
	        }
	        if(root->left)
	        {
	            s1.push(root->left);
	        }
	    }
	}
	return v;
}
