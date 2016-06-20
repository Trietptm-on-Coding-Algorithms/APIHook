
#pragma pack(1)
typedef struct tagPEER_INFO_DATA
{
	u_long inner_ip;		// ����IP
	u_short inner_port;		// �����˿�
	u_short protocol_no;	// Э���
	u_long net1_ip;			// NET1 IP
	u_short net1_port;		// NET1 �˿�
	u_long net2_ip;			// net2 IP
	u_short net2_port;		// net2 �˿�
	u_long unknown;
} PEER_INFO_DATA, *PPEER_INFO_DATA;
#pragma pack()


#pragma pack(1)
typedef struct tagPEER_LIST_RESP
{
	u_long checksum;		// У���
	u_char cmd_flag;		// ����
	u_long seq;				// ���
	u_char option_flag;		// �̶�
	u_char unknown_fd;		// δ֪
	u_char file_hash[16];	// file hash
	u_short peer_count;		// �����peer����
} PEER_LIST_RESP, *PPEER_LIST_RESP;
#pragma pack()

/*
* 0x31�ظ�
* ����������PEER�б�������Ϣ
*/
