
/*! \brief Multi-thread safe sleep routine */
void rpt_safe_sleep(struct rpt *rpt, struct ast_channel *chan, int ms);

/*! \brief Wait a configurable interval of time */
int wait_interval(struct rpt *myrpt, int type, struct ast_channel *chan);

/*! \brief return via error priority */
int priority_jump(struct rpt *myrpt, struct ast_channel *chan);

/*! \brief Say a file - streams file to output channel */
int sayfile(struct ast_channel *mychannel, char *fname);

int saycharstr(struct ast_channel *mychannel, char *str);

/*! \brief Say a phonetic words -- streams corresponding sound file */
int sayphoneticstr(struct ast_channel *mychannel, char *str);

/*! \brief Say a number -- streams corresponding sound file */
int saynum(struct ast_channel *mychannel, int num);

/*! \brief Say a node and nodename. Try to look in dir referred to by nodenames in
 * config, and see if there's a custom node file to play, and if so, play it */
int saynode(struct rpt *myrpt, struct ast_channel *mychannel, char *name);

/*! \note must be called locked */
void do_dtmf_local(struct rpt *myrpt, char c);

int play_tone_pair(struct ast_channel *chan, int f1, int f2, int duration, int amplitude);

int play_tone(struct ast_channel *chan, int freq, int duration, int amplitude);

/*! \brief Convert string into morse code */
int send_morse(struct ast_channel *chan, char *string, int speed, int freq, int amplitude);

/*! \brief send asterisk frame text message on the current tx channel */
int send_usb_txt(struct rpt *myrpt, char *txt);

/*! \brief send asterisk frame text message on the current tx channel */
int send_link_pl(struct rpt *myrpt, char *txt);

/*! \brief send newkey request */
void send_newkey(struct ast_channel *chan);

void send_old_newkey(struct ast_channel *chan);