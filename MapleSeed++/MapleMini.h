namespace MapleSeed
{
	class MapleMain
	{
	public:
		static int g_init(signed int argc, char* argv[]);

		static void DecryptContent(std::string path, std::string defaultdir);

		static void DownloadContent(std::string defaultdir, std::string id);

	private:
		static po::options_description defineOptions();

		static void create_decrypt_file(std::string _id);

		static void vmcount(po::variables_map vm, po::options_description desc, std::string defaultdir);
	};
}