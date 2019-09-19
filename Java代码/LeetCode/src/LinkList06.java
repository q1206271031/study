import java.util.ArrayList;

/**
 * 从尾到头反过来打印出每个结点的值。
 */
public class LinkList06 {

    class ListNode {
        ListNode next;
        Object val;
    }

    public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
        ArrayList<Integer> ret = new ArrayList<>();
        if (listNode != null) {
            printListFromTailToHead(listNode.next);
            System.out.println(listNode.val);
        }
        return ret;
    }
}
