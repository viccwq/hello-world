/*************************************************************************
 * Copyright(c) 2016-2020 VX-Lab. All rights reserved.
 * File Name:    jianzhi_offer.cpp
 * Author:       
 * Mail:         
 * Version:      v0.00 
 * Created Time: 2016/12/20
 * Description:  
 * 
 * Others:       
 * 
 * History:
 1.Version:
   Author:
   Modified Time:
   Modification:
 ************************************************************************/


#include "jianzhi_offer.h"
#include <iostream>
using namespace std;

//��ά�����в���
//��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int col = array[0].size() - 1;
        int row = array.size() - 1;
        int i = 0, j = col;
        while (i <= row && j >= 0)
        {
            if (array[i][j] == target)
                return true;
            else if (array[i][j] > target)
                j--;
            else
                i++;
        }
        return false;
        
    }
};


//
//�滻�ո�
//��ʵ��һ����������һ���ַ����еĿո��滻�ɡ�%20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��
class Solution {
public:
	void replaceSpace(char *str,int length) {

        
        int count = 0;
        int i = length - 1;
        while (i>=0)
        {
            if (str[i--] == ' ')
                count++;
        }

        if (!count)
            return;

        i = length - 1;
        str[length + 2 * count] = '\0';
        while (i>=0)
        {
            if (str[i] == ' ')
            {
                str[i + 2 * count] = '0';
                str[i + 2 * count - 1] = '2';
                str[i + 2 * count - 2] = '%';
                count--;
            }
            else
                str[i + 2 * count] = str[i];
            i--;
        }


	}
};



//��δ��ͷ��ӡ����
//����һ����������β��ͷ��ӡ����ÿ���ڵ��ֵ��
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> vect;
        ListNode *next = head;
        while (next != NULL)
        {
            vect.push_back(next->val);
            next = next->next;
        }

        int i = 0, j = vect.size() - 1;
        int temp;
        while (i < j)
        {
            temp = vect[i]; 
            vect[i] = vect[j]; 
            vect[j] = temp; 
            i++;
            j--;
        }
        return vect;

    }
};





//������ջ��ʵ��һ�����У���ɶ��е�Push��Pop������ �����е�Ԫ��Ϊint���͡�
//
class Solution
{
public:
    void push(int node) {
       stack1.push(node); 
    }

    int pop() {
        int val;
        if (stack2.empty()) 
        {
            while (!stack1.empty())
            {
                int temp = stack1.top();
                stack1.pop();
                stack2.push(temp);
            }
        }
 
        val = stack2.top();
        stack2.pop();
        return val;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};


//��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
//����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
//��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1��
//NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int size = rotateArray.size();
        if (!size)
            return 0;
        if (rotateArray[0] < rotateArray[size - 1])
            return rotateArray[0];

        size--;
        while (size)
        {
            if(rotateArray[size] < rotateArray[size - 1])
                break;
            size--;
        }
        return rotateArray[size];

    }
};

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
       sort(rotateArray.begin(),rotateArray.end());
         
        return rotateArray[0];
         
    }
};


//��Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n�
//n<=39

class Solution {
public:
    int Fibonacci(int n) {
        if (n == 0)
            return 0;
        
       	if (n <= 2)
            return 1;
        else
        	return (Fibonacci(n - 1) + Fibonacci(n - 2)); 
    }
};

//һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж�����������
class Solution {
public:
    int jumpFloor(int number) {
        vector<int> count(number+1);
        count[0] = 0;
        count[1] = 1;
        count[2] = 2;
        count[3] = 3;
        count[4] = 5;
        if (number >= 5)
        {
            for (int i = 5; i <= number; i++)
                count[i] = count[i - 1] + count[i - 2];
        }
        return count[number];
        
    }
};

//һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж�������
class Solution {
public:
    int jumpFloorII(int number) {
        if(number <= 2) 
            return number;
        else
            return 2 * jumpFloorII(number - 1);
    }
};


//����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
class Solution {
public:
     int  NumberOf1(int n) {
                 
        unsigned int temp;
        int i = 0;
        memcpy(&temp, &n, sizeof(int));
        while (temp)
        {
            temp &= (temp - 1);
                i++;
        }
        return i;
        
         
     }
};

//��ֵ�������η�
//����һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η���
class Solution {
public:
    double Power(double base, int exponent) {
    
        if (!exponent)
            return 1;
        unsigned int exp = (exponent > 0) ? exponent : (exponent * -1);
        double result = base;
        while (--exp)
        {
            result *= base;
        }
        return (double)((exponent > 0) ? result : (1 / result)); 

    }
};



//��������˳��ʹ����λ��ż��ǰ��
//����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����е�����λ�������ǰ�벿�֣�
//���е�ż��λ��λ������ĺ�벿�֣�����֤������������ż����ż��֮������λ�ò��䡣
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> even_a; 
        int size = array.size();
        int odd_idx = 0;
        for(int i = 0; i < size; i++)
        {
            if (array[i] & 0x1)
            {
                if (odd_idx < i)
                    array[odd_idx] = array[i];
                odd_idx++;
            }
            else
                even_a.push_back(array[i]);
        }
        for(int i = odd_idx; i < size; i++)
        {
            array[i] = even_a[i - odd_idx];
        }

    }
};



//�����е�����k���ڵ�
//����һ������������������е�����k����㡣
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        int list_len = 0;
        ListNode * list_k =  pListHead;
        ListNode * list_r =  pListHead;
        for(int i=0;i<k;i++)      //list_r ����k-1����
        {
            if(list_r == NULL)
                return NULL;
            list_r = list_r->next;
        }
        while(list_r != NULL)
        {
            list_r = list_r->next;
            list_k = list_k->next;
        }
        return list_k;  
    }
};



//��ת����
//����һ����������ת�������������������Ԫ�ء�
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* p_temp = pHead;
        if (NULL == p_temp)
            return NULL;

        ListNode* p_temp_n = pHead->next;
        if (NULL == p_temp_n)
            return pHead;

        pHead->next = NULL;
        while(NULL != p_temp_n)
        {
            ListNode* p = p_temp_n->next; 
            p_temp_n->next = p_temp;
            p_temp = p_temp_n;
            p_temp_n = p;
        }

        return p_temp;


    }
};





//�ϲ��������������
//������������������������������������ϳɺ����������Ȼ������Ҫ�ϳɺ���������㵥����������
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        
        if (!pHead1)
            return pHead2;
        if (!pHead2)
            return pHead1;
        ListNode* p_temp= NULL, *ph1 = pHead1, *ph2 = pHead2;
        ListNode* p_head= NULL;

        if (ph1->val < ph2->val)
        {
            p_head= ph1;
            ph1 = ph1->next;
        }
        else
        {
            p_head= ph2;
            ph2 = ph2->next;
        }

        p_temp = p_head;
        while (ph1 && ph2)
        {
            if (ph1->val < ph2->val)
            {
                p_temp->next = ph1;
                ph1 = ph1->next;
            }
            else
            {
                p_temp->next = ph2;
                ph2 = ph2->next;
            }
            p_temp = p_temp->next;
        }

        if (ph1)
            p_temp->next = ph1;
        else if (ph2) 
            p_temp->next = ph2;
        else
            p_temp->next = NULL;

        return p_head;

    }
};


//�������ö�����A��B���ж�B�ǲ���A���ӽṹ����ps������Լ��������������һ�������ӽṹ��
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool result = false;

        if (pRoot1 && pRoot2)
        {
            if (pRoot1->val == pRoot2->val)
            {
                result = DoesTree1HasTree2(pRoot1, pRoot2);
            }
            if (!result)
            {
                result = HasSubtree(pRoot1->left, pRoot2);
            }
            if (!result)
            {
                result = HasSubtree(pRoot1->right, pRoot2);
            }
        }

        return result;
    }

    bool DoesTree1HasTree2(TreeNode* root1, TreeNode* root2)
    {
        if (!root2)
        {
            return true;
        }

        if (!root1)
        {
            return false;
        }

        if (root1->val != root2->val)
        {
            return false;
        }
        return DoesTree1HasTree2(root1->left, root2->left) \
            && DoesTree1HasTree2(root1->right, root2->right);
        
    }


};

//���������Ķ�����������任ΪԴ�������ľ��� 
//��������:
//�������ľ����壺Դ������ 
//    	    8
//    	   /  \
//    	  6   10
//    	 / \  / \
//    	5  7 9 11
//    	���������
//    	    8
//    	   /  \
//    	  10   6
//    	 / \  / \
//    	11 9 7  5


/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    void Mirror(TreeNode *pRoot) {

        if (pRoot)
        {
           TreeNode *temp = pRoot->left;
           pRoot->left = pRoot->right;
           pRoot->right = temp;
        }
        else
           return;
        Mirror(pRoot->left);
        Mirror(pRoot->right);

    }
};


//˳ʱ���ӡ����
//����һ�����󣬰��մ���������˳ʱ���˳�����δ�ӡ��ÿһ�����֣����磬����������¾��� 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 �����δ�ӡ������1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        int h = matrix.size();
        int w = matrix[0].size();
        vector<int> res;
        if (h == 0)
            return res;
        else if (h == 1)
            return matrix[0];
        else if (h > 1 && w == 1)
        {
            for(int i = 0; i < h; i++)
                res.push_back(matrix[i][0]);
            return res;
        }
        else
        {
            int top = 0, bottom = h - 1, left = 0, right = w - 1;
            while (top <= bottom && left <= right)
            {
                
                
                for(int i = left; i <= right; i++)
                    res.push_back(matrix[top][i]);          
                for(int j = top + 1; j <= bottom - 1; j++)
                    res.push_back(matrix[j][right]);

                if (top != bottom)
                {
                    for(int k = right; k >= left; k--)
                        res.push_back(matrix[bottom][k]);
                }

                if (right != left)
                {
                    for(int m = bottom - 1; m >= top + 1; m--)
                        res.push_back(matrix[m][left]);
                }
                top++;
                bottom--;
                left++;
                right--;
            }
            return res;
        }



    }
};

//����min������ջ
//����ջ�����ݽṹ�����ڸ�������ʵ��һ���ܹ��õ�ջ��СԪ�ص�min������
class Solution {
public:


    stack<int> data, min_data;
    void push(int value) {
        
        data.push(value);
        if (min_data.empty())
            min_data.push(value);
        else
        {
            int last_min = min_data.top();
            min_data.push((last_min < value)?last_min:value);
        }
    }
    void pop() {
        data.pop();
        min_data.pop();
       
    }
    int top() {
        if (!data.empty())
            return data.top();
        else
            return -1;
        
    }
    int min() {
        if (!min_data.empty())
            return min_data.top();
        else
            return -1;
    }

};

//ջ��ѹ�� ��������
//���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ��������Ƿ�Ϊ��ջ�ĵ���˳�򡣼���ѹ��ջ���������־�����ȡ���������1,2,3,4,5��ĳջ��ѹ��˳������4��5,3,2,1�Ǹ�ѹջ���ж�Ӧ��һ���������У���4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С���ע�⣺���������еĳ�������ȵģ�


class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
  		int size = popV.size();
		if (0 == size) 
			return false;

		stack<int> data;
		for(int i = 0, j = 0; i < size; i++)
		{
			data.push(pushV[i]);
			while(j < size && data.top() == popV[j])
			{
				data.pop();
				j++;
			}    
		}
		return data.empty();        
    }
};

//�������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ��
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
		vector<int> result;
		if(root==NULL)
			return result;

		queue<TreeNode *> Q;
		Q.push(root);
		while(!Q.empty())
		{
			TreeNode* p = Q.front();
			result.push_back(p->val);
			Q.pop();
			if(p->left != NULL)
				Q.push(p->left);
			if(p->right != NULL)
				Q.push(p->right);
		}
		return result;
    }
};

//����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ��������������Yes,�������No���������������������������ֶ�������ͬ��
class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
		int size = sequence.size();
		if (!size)
			return false;

		return isPostBST(sequence, 0, size - 1);
    }
    
    bool isPostBST(vector<int>& sequence, int start, int end)
    {
        if (end <= start)
            return true;

        int i = start;
        int data = sequence[end];
        for (; i < end; i++)
        {
            if (sequence[i] > data)
                break;
        }
        //�����е������������ж�
        int j = i;
        for (; j < end; j++)
        {
            if (sequence[j] < data)
                return false;
        }
        return isPostBST(sequence, start, i - 1) \
            && isPostBST(sequence, i, end - 1);
    }   
    
    
};







//ɾ���������ظ��Ľ��
//��һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣 ���磬����1->2->3->3->4->4->5 ������Ϊ 1->2->5

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        int val;
        if (NULL == pHead)
            return NULL;
        if (NULL == pHead->next)
            return pHead;

        ListNode head(-1);
        head.next = pHead;

        ListNode* p_pre = &head;
        ListNode* p_cur = head.next;
        ListNode* p_d = NULL;
        while (p_cur && p_cur->next)
        {
            if (p_cur->next->val == p_cur->val)
            {
                val = p_cur->val;
                p_d = p_cur;
                p_cur = p_cur->next->next;
                p_pre->next = p_cur;
                    
                delete p_d->next;
                delete p_d;
                continue;
            }

            if (p_cur->val == val)
            {
                p_d = p_cur;
                p_cur = p_cur->next;
                p_pre->next = p_cur;
                delete p_d;
            }
            else
            {
                p_pre = p_cur;
                p_cur = p_cur->next;
            }
        }

        if (p_cur && p_cur->val == val)
        {
            p_pre->next = NULL;
            delete p_cur;
        }
        return head.next;

    }
};







