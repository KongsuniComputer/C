// ��ҹ��� ��ȯ��
#include <stdio.h> // STanDard Input Output �Լ� ������� ��ó����

int main(void) // main function
{
    int input, output; // getchar�� �Է¹��� ���ڸ� ������ ������ ���� input ��
                       // ���� ��ȯ �� �����Ͽ� putchar�� ����� ���� output ����

    while(1) // ���� �ݺ�
    {

    printf("���ڸ� �Է��Ͻÿ� : "); // ����ڷκ��� ���ĺ��� �Է��ض�� �޽��� ���
    input = getchar(); // �ϳ��� ���ĺ��� �Է� �޾� �ڵ尪�� ���������� ��ȯ�Ͽ� input�� ����


    if (input >= 97 && input <= 122){ // ���� �Է� ���� ���ĺ��� �ҹ���(a~z -> ASCII CODE : 97 ~ 122) �̶��
        output = input - 32; // �� ���ĺ��� �ش�Ǵ� ASCII CODE���� 32�� ���� (A~Z-> ASCII CODE : 65 ~ 90)
        putchar(output); // ASCII CODE�� ���� ������ �� ���� �ش�Ǵ� ���ڸ� ���
        putchar('\n'); // �� �����
    }

    else if (input >= 65 && input <= 90){ // ���� �Է� ���� ���ĺ��� �ҹ���(A~Z-> ASCII CODE : 65 ~ 90) �̶��
        output = input + 32; // �� ���ĺ��� �ش�Ǵ� ASCII CODE���� 32�� ������ (a~z -> ASCII CODE : 97 ~ 122)
        putchar(output); // ASCII CODE�� ���� ������ �� ���� �ش�Ǵ� ���ڸ� ���
        putchar('\n'); // �� �����
    }

    else if (input == 46){ // ���� �Է� ���� ���ڰ� . (ASCII CODE : 46) �̶��
        break; // while ���� Ż���Ͽ� ���α׷� ����
    }

    else // ���ĺ� ��, �ҹ��ڰ� �ƴ� �ٸ� ���ڸ� �Է��ߴٸ�
        printf("\n�ùٸ� ���ĺ��� �Է��Ͻÿ�.\n\n"); // ����ڿ��� �� �Է��ض�� �޽��� ����Ͽ� ó������ �ǵ��ư�

     getchar(); // ������ Hint�� �����ִ� �� ó�� �ٹٲ� ���ڸ� �����ϱ� ���Ͽ� getchat ��ȣ��
    }

    return 0; // main function �� 0���� ��ȯ
}
