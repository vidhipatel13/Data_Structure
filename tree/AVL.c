#include <stdio.h>
#include <stdlib.h>

// node
struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height; 
};

int calculateHeight(struct node *root){
    int lh=0;
    int rh=0;

    if (root->left != NULL)
    {
        lh = root->left->height;
    }
    if (root->right != NULL)
    {
        rh = root->right->height;
    }

    if (lh>rh)
    {
        return lh + 1;
    }else
    {
        return rh + 1;
    }   
    
}

int calculateBF(struct node *root){
    int lh=0;
    int rh=0;
    if (root->left != NULL)
    {
        lh = root->left->height;
    }
    if (root->right != NULL)
    {
        rh = root->right->height;
    }
    return lh-rh;
}
struct node *addNode(struct node *root, int data) // 50,120 100,120 NULL,120
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        root->height =1;
        return root;
    }
    else
    {
        if (root->data < data)
        {
            // right
            root->right = addNode(root->right, data); // NULL
            // 50->right = addNode(100,120);
            // 100->right = addNode(NULL,120);
            
        }
        else
        {
            // left
            root->left = addNode(root->left, data);
        }
        // after the insertion
        root->height = calculateHeight(root);

        //bf
        //bf =lh-rh;
        int bf = calculateBF(root);
        if (bf<-1)
        {
            printf("\n Right Imbalance= %d for %d ",bf,root->data);
            if (data>root->right)
            {
                printf("/nRR");
            }else
            {
                printf("/nRL");
            }
            
            
        }
        if (bf>1)
        {
            printf("\n Left Imbalance= %d for %d ",bf,root->data);
            if (data>root->left)
            {
                printf("/nLR");
            }else
            {
                printf("/nLL");
            }
        }
    }

    return root;
}

void inOrder(struct node *root){

    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d(%d)", root->data, root->height );
        inOrder(root->right);
    }
    
}
int main()
{

    struct node *root = NULL;

    // root = addNode(root, 30);
    // addNode(root, 40);
    // addNode(root, 10);
    // addNode(root, 50);
    
    inOrder(root);
    // printf(" %d ",root->data);//10 
 
    
    
    
    
    // addNode(root, 30);

    return 0;
}

