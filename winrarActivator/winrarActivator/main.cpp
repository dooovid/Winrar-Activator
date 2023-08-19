#include <fstream>
#include <iostream>

int main() {
	std::string key = "RAR registration data\nWinRAR\nUnlimited Company License\nUID = 4b914fb772c8376bf571\n6412212250f5711ad072cf351cfa39e2851192daf8a362681bbb1d\ncd48da1d14d995f0bbf960fce6cb5ffde62890079861be57638717\n7131ced835ed65cc743d9777f2ea71a8e32c7e593cf66794343565\nb41bcf56929486b8bcdac33d50ecf773996052598f1f556defffbd\n982fbe71e93df6b6346c37a3890f3c7edc65d7f5455470d13d1190\n6e6fb824bcf25f155547b5fc41901ad58c0992f570be1cf5608ba9\naef69d48c864bcd72d15163897773d314187f6a9af350808719796";
	
	std::ofstream fs("C:\\Program Files\\WinRAR\\rarreg.key");

	std::cout <<
		" __      __ .__                                                    __   .__                              \n"
		"/  \\    /  \\|__|  ____ _______ _____  _______     _____     ____ _/  |_ |__|_____  ___  __ ____ _______  \n"
		"\\   \\/\\/   /|  | /    \\\\_  __ \\\\__  \\ \\_  __ \\    \\__  \\  _/ ___\\\\   __\\|  |\\__  \\ \\  \\/ //  _ \\\\__  __ \\ \n"
		" \\        / |  ||   |  \\|  | \\/ / __ \\_|  | \\/     / __ \\_\\  \\___ |  |  |  |/ __  \\_\\	/(  <_> )|  | \\/ \n"
		"  \\__/\\  /  |__||___|  /|__|   (____  /|__|       (____  / \\___  >|__|  |__|(____  / \\_/  \\____/ |__|    \n"
		"       \\/            \\/             \\/                 \\/      \\/                \\/                     \n";
	system("Color  0A");
	std::cout << "[+] Made By doovid\n\n";

	if (!fs) {
		std::cout << "File system error\n";
		std::cout << "Try running this program as administrator\n";
		system("pause");
		return 0;
	}
	
	fs << key;
	fs.close();
	std::cout << "WinRAR activated!\n";
	system("pause");
	return 0;
}