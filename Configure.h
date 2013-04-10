#ifndef CRYPT000_CRYPT000CONFIG_H
#define CRYPT000_CRYPT000CONFIG_H

enum HASH_ALGORITHM {
	CRC32,
	MD5,
	SHA1
};

enum CRYPT_ALGORITHM{
	XOR,
	RC4,
	DES,
	AES,
	RSA,
	ECC
};

enum CRYPT_TYPE {
	DO_NOTHING_IT = 0,
	CRYPT_IT
};

typedef struct _CONFIGURE_STRUCT
{
	bool bL2L;		// ���ض˿� -> ���ض˿�
	bool bC2C;		// ���Ӷ˿� -> ���Ӷ˿�
	bool bL2C;		// ���ض˿� -> ���Ӷ˿�
	bool bSock5Proxy;

	unsigned char bL2LCrypt[2];
	unsigned char bC2CCrypt[2];
	unsigned char bL2CCrypt[2];

	bool bEncrypt;
	bool bHashX;						// ʹ�����õ�HashX�㷨
	char szSendIP[64];
	char szConnectIP1[64];
	char szConnectIP2[64];
	char szPassword[1024];
	unsigned long dwCrc32Password;

	unsigned short wRecvPort;
	unsigned short wSendPort;
	bool bL2CSync;

	unsigned short wListenPort1;
	unsigned short wListenPort2;
	bool bL2LSync;

	unsigned short wConnectPort1;
	unsigned short wConnectPort2;
	bool bNotWaitRecvToConnectPort2;	// ���ȴ��˿�1������Ϣ��ʱ�����Ӷ˿�2
	bool bC2CSync;						// �Ƿ�ͬ���߳�

	unsigned short wProxyPort;

	HASH_ALGORITHM hash;
	CRYPT_ALGORITHM crypt;
} CONFIGURE_STRUCT, *PCONFIGURE_STRUCT;

#endif
