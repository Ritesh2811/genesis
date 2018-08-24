#include <bits/stdc++>
static auto_increament_id =1; // this value is auto increament just like a unique identifier in sql or any other language
static auto_node_no=1;
class single_node_data
{
public :
	int own_id; // this 
	double value;
	string name;
	string hash;


	single_node_data();
	single_node_data(double value , string name)
	{
		this->own_id = auto_increament_id;
		auto_increament_id++;
		this->name = name;
		this->value = value;
		this->hash ="";


	}
	void create_hash()
	{
		this->hash = to_string(this->own_id)+'#'+name+'#'+to_string(this->value)+'@'; // creating a self hash function to convert the data in hash form

	}
	string get_hash()
	{
		return this->hash;
	}

};
class single_node
{
public :
	string timestamp;
	single_node_data data;
	static int nodeNummber;
	string nodeId , refernce_node;
	vector <string> child_ref_node_id;
	string gen_ref_node;
	string hash_value ;
	string my_secret;


	single_node();
	single_node( single_node_data data , string nodeId , string refernce_node , string child_ref_node_id, string gen_ref_node)
	{
		time_t now = time(0);
		this->timestamp = ctime(&now);
		this->data = data;
		this->nodeNummber = auto_node_no;
		auto_node_no++;
		this->nodeId = nodeId;
		this->refernce_node = refernce_node ;
		this->child_ref_node_id.push_back(child_ref_node_id);
		this->gen_ref_node = gen_ref_node;


		
	}
	void create_hash()
	{
		this->hash_value = this->timestamp+'#'+(this->data).get_hash()+'#'+to_string(nodeNummber)+'#'+this->nodeId+'#'+this->refernce_node+'#'+this.gen_ref_node+'@';
	}


	single_node_data get_data(string my_secret)
	{
		if(this->my_secret == my_secret)
		{
			return this->data;
		}
		single_node_data = data();

		return dat;
	}


};


class genesis
{
	map<string , single_node> tree;

public:
	genesis();

	void insert_node(string child_ref_node_id)
	{
		int parent_value = -1;
		single_node parent;
		int flag=0;
		if(tree.find(refernce_node_id)!=tree.end())
		{
			parent = tree[refernce_node_id];
			flag =1;
		}
		if(flag)
		{
			vector<string> children = parent.child_ref_node_id;
			int cur_sum =0;
			for(auto it= children.begin();it!=children.end();++it)
			{
				cur_sum+=tree[*it].data.value;
			}

		}
		int possible_ans = parent.data.value;
		possible_ans = possible_ans - cur_sum;
		if(possible_ans)
		{
			
		}



	}





	~genesis();
	
};
int main()
{

	return 0;
}