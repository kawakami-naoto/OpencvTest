#include "opencv2/opencv.hpp"

int main(int argh, char* argv[])
{
	cv::VideoCapture cap(0);//�f�o�C�X�̃I�[�v��
							//cap.open(0);//�������ł��ǂ��D

	if (!cap.isOpened())//�J�����f�o�C�X������ɃI�[�v���������m�F�D
	{
		//�ǂݍ��݂Ɏ��s�����Ƃ��̏���
		return -1;
	}

	while (1)//�������[�v
	{
		cv::Mat frame;
		cap >> frame; // get a new frame from camera

					  //
					  //�擾�����t���[���摜�ɑ΂��āC�N���[�X�P�[���ϊ���2�l���Ȃǂ̏������������ށD
					  //

		cv::imshow("window114514", frame);//�摜��\���D

		int key = cv::waitKey(1);
		if (key == 113)//q�{�^���������ꂽ�Ƃ�
		{
			break;//while���[�v���甲����D
		}
		else if (key == 115)//s�������ꂽ�Ƃ�
		{
			//�t���[���摜��ۑ�����D
			cv::imwrite("img.png", frame);
		}
	}
	cv::destroyAllWindows();
	return 0;
}