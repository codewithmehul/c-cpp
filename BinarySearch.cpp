

#include <iostream>
#include <string>

using namespace std;


int BinarySearch(const string strArray[], int numElements, const string &  search)
{
	int low = 0;
	int high = numElements - 1;
	int mid = 0;
	int left = 0;
	int right = 0;
	while (high >= low)
	{
		mid = (low + high) / 2;

		if (search == strArray[mid])
		{			
			return mid;
		}
		else if (strArray[mid] == "")
		{			
			left = mid - 1;
			right = mid + 1;
			bool found = false;
			while (left >= low && right <= high)
			{
				if (strArray[left] == search)
				{
					return left;
				}
				else if (strArray[right] == search)
				{
					return right;
				}
				else if (strArray[left] == "" &&
					strArray[right] == "")
				{
					--left;
					++right;
					found = false;
				}				
				else if (strArray[right] != "")
				{
					if (strArray[right] < search)
					{
						low = right + 1;
					}
					else
					{
						high = right - 1;
					}
					found = true;
				}
				else if (strArray[left] != "")
				{
					if (strArray[left] < search)
					{
						low = left + 1;
					}
					else
					{
						high = left - 1;
					}
					found = true;
				}

				if (true == found)
				{
					break;
				}
			}
			if (false == found)
			{
				return -1;
			}
		}
		else if (strArray[mid] < search)
		{
			low = mid + 1;
		}
		else if (strArray[mid] > search)
		{
			high = mid - 1;
		}		
	}
	return -1;

}

int main(int argc, char* argv[])
{
	const string strArray[] = { "", "", "ABC", "", "", "", "", "", "DEF", "", "", "", "", "PQR", "", "", "", "XYZ", "", "" };
	int numElements = 12;
	int position = BinarySearch(strArray, 20, "XZ");
		
	if (position >= 0)
	{
		cout << "String found at location : " << position << endl;
	}
	else
	{
		cout << "Couldn't find the string" << endl;
	}

	cin.get();
	return 0;
}

