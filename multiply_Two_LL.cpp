long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long mod = 1e9 + 7;
    long long add = 0, addd = 0;
    Node* temp1 = l1, *temp2 = l2;
    while (temp1 != NULL) {
        add = ((add * 10) % mod + (temp1->data) % mod) % mod;
        temp1 = temp1->next;
    }
    while (temp2 != NULL) {
        addd = ((addd * 10) % mod + (temp2->data) % mod) % mod;
        temp2 = temp2->next;
    }
    return (add * addd) % mod;
}
