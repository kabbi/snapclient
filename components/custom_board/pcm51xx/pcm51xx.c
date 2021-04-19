/*
 * MIT License
 *
 * Copyright (c) 2020 <ESPRESSIF SYSTEMS (SHANGHAI) CO., LTD>
 * Copyright (c) 2021 David Douard <david.douard@sdfa3.org>
 *
 * Permission is hereby granted for use on all ESPRESSIF SYSTEMS products, in
 * which case, it is free of charge, to any person obtaining a copy of this
 * software and associated documentation files (the "Software"), to deal in the
 * Software without restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#include "pcm51xx.h"

#include "board.h"
#include "esp_log.h"
#include "i2c_bus.h"
#include "pcm51xx_reg_cfg.h"

static const char *TAG = "PCM51XX";

#define PCM51XX_BASE_ADDR 0x98
#define PCM51XX_RST_GPIO get_pa_enable_gpio()
#define PCM51XX_VOLUME_MAX 255
#define PCM51XX_VOLUME_MIN 0

#define PCM51XX_ASSERT(a, format, b, ...) \
  if ((a) != 0) {                         \
    ESP_LOGE(TAG, format, ##__VA_ARGS__); \
    return b;                             \
  }

esp_err_t pcm51xx_ctrl(audio_hal_codec_mode_t mode,
                       audio_hal_ctrl_t ctrl_state);
esp_err_t pcm51xx_config_iface(audio_hal_codec_mode_t mode,
                               audio_hal_codec_i2s_iface_t *iface);
static int pcm51xx_addr;

/*
 * Operate function
 */
audio_hal_func_t AUDIO_CODEC_PCM51XX_DEFAULT_HANDLE = {
    .audio_codec_initialize = pcm51xx_init,
    .audio_codec_deinitialize = pcm51xx_deinit,
    .audio_codec_ctrl = pcm51xx_ctrl,
    .audio_codec_config_iface = pcm51xx_config_iface,
    .audio_codec_set_mute = pcm51xx_set_mute,
    .audio_codec_set_volume = pcm51xx_set_volume,
    .audio_codec_get_volume = pcm51xx_get_volume,
    .audio_hal_lock = NULL,
    .handle = NULL,
};

static esp_err_t pcm51xx_transmit_registers(const pcm51xx_cfg_reg_t *conf_buf,
                                            int size) {
  return ESP_OK;
}

esp_err_t pcm51xx_init(audio_hal_codec_config_t *codec_cfg) {
  return ESP_OK;
}

esp_err_t pcm51xx_set_volume(int vol) {
  return ESP_OK;
}

esp_err_t pcm51xx_get_volume(int *value) {
  return ESP_OK;
}

esp_err_t pcm51xx_set_mute(bool enable) {
  return ESP_OK;
}

esp_err_t pcm51xx_get_mute(bool *enabled) {
  return ESP_OK;
}

esp_err_t pcm51xx_deinit(void) {
  // TODO
  return ESP_OK;
}

esp_err_t pcm51xx_ctrl(audio_hal_codec_mode_t mode,
                       audio_hal_ctrl_t ctrl_state) {
  // TODO
  return ESP_OK;
}

esp_err_t pcm51xx_config_iface(audio_hal_codec_mode_t mode,
                               audio_hal_codec_i2s_iface_t *iface) {
  // TODO
  return ESP_OK;
}
