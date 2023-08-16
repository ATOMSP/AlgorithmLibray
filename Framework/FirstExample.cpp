/**
 * 递归算法集合
 */
#include "AlgorithLib.h"
#include <cstdio>

/**
 * 链表部分
 */

/* 第一题 */
 struct ListNode {
     int val;
     struct ListNode *next;
 };

/**
 * 解题思路：b站讲解
 *
 *
 * @param head ListNode类
 * @return ListNode类
 */
struct ListNode* ReverseList(struct ListNode* head ) {
    if(head == nullptr){
        return nullptr;
    }
    struct ListNode * ptr = head;
    struct ListNode * temp;
    struct ListNode * pre = nullptr;
    while (ptr != nullptr){
        temp = ptr->next;
        ptr->next = pre;
        pre = ptr;
        ptr = temp;
    }
    return pre;
}

/* 第二题 */


/**
 * 链表部分
 */



