#ifdef __cplusplus
extern "C" {
#endif

size_t snd_mixer_selem_id_sizeof();
#define snd_mixer_selem_id_alloca(ptr) ({ assert(ptr); *ptr = (snd_mixer_selem_id_t *) alloca(snd_mixer_selem_id_sizeof()); memset(*ptr, 0, snd_mixer_selem_id_sizeof()); 0; })
int snd_mixer_selem_id_malloc(snd_mixer_selem_id_t **ptr);
void snd_mixer_selem_id_free(snd_mixer_selem_id_t *obj);
void snd_mixer_selem_id_copy(snd_mixer_selem_id_t *dst, const snd_mixer_selem_id_t *src);

const char *snd_mixer_selem_id_get_name(const snd_mixer_selem_id_t *obj);

unsigned int snd_mixer_selem_id_get_index(const snd_mixer_selem_id_t *obj);

void snd_mixer_selem_id_set_name(snd_mixer_selem_id_t *obj, const char *val);

void snd_mixer_selem_id_set_index(snd_mixer_selem_id_t *obj, unsigned int val);

void snd_mixer_set_callback(snd_mixer_t *obj, snd_mixer_callback_t val);

void * snd_mixer_get_callback_private(const snd_mixer_t *obj);

void snd_mixer_set_callback_private(snd_mixer_t *obj, void * val);

unsigned int snd_mixer_get_count(const snd_mixer_t *obj);

void snd_mixer_elem_set_callback(snd_mixer_elem_t *obj, snd_mixer_elem_callback_t val);

void * snd_mixer_elem_get_callback_private(const snd_mixer_elem_t *obj);

void snd_mixer_elem_set_callback_private(snd_mixer_elem_t *obj, void * val);

snd_mixer_elem_type_t snd_mixer_elem_get_type(const snd_mixer_elem_t *obj);

size_t snd_mixer_selem_info_sizeof();
#define snd_mixer_selem_info_alloca(ptr) ({ assert(ptr); *ptr = (snd_mixer_selem_info_t *) alloca(snd_mixer_selem_info_sizeof()); memset(*ptr, 0, snd_mixer_selem_info_sizeof()); 0; })
int snd_mixer_selem_info_malloc(snd_mixer_selem_info_t **ptr);
void snd_mixer_selem_info_free(snd_mixer_selem_info_t *obj);
void snd_mixer_selem_info_copy(snd_mixer_selem_info_t *dst, const snd_mixer_selem_info_t *src);

long snd_mixer_selem_info_get_min(const snd_mixer_selem_info_t *obj);

long snd_mixer_selem_info_get_max(const snd_mixer_selem_info_t *obj);

int snd_mixer_selem_info_get_capture_group(const snd_mixer_selem_info_t *obj);

int snd_mixer_selem_info_has_volume(const snd_mixer_selem_info_t *obj);

int snd_mixer_selem_info_has_joined_volume(const snd_mixer_selem_info_t *obj);

int snd_mixer_selem_info_has_mute(const snd_mixer_selem_info_t *obj);

int snd_mixer_selem_info_has_joined_mute(const snd_mixer_selem_info_t *obj);

int snd_mixer_selem_info_has_capture(const snd_mixer_selem_info_t *obj);

int snd_mixer_selem_info_has_joined_capture(const snd_mixer_selem_info_t *obj);

int snd_mixer_selem_info_has_exclusive_capture(const snd_mixer_selem_info_t *obj);

size_t snd_mixer_selem_value_sizeof();
#define snd_mixer_selem_value_alloca(ptr) ({ assert(ptr); *ptr = (snd_mixer_selem_value_t *) alloca(snd_mixer_selem_value_sizeof()); memset(*ptr, 0, snd_mixer_selem_value_sizeof()); 0; })
int snd_mixer_selem_value_malloc(snd_mixer_selem_value_t **ptr);
void snd_mixer_selem_value_free(snd_mixer_selem_value_t *obj);
void snd_mixer_selem_value_copy(snd_mixer_selem_value_t *dst, const snd_mixer_selem_value_t *src);


#ifdef __cplusplus
}
#endif