/* -*- c++ -*- */
/*                                  Apache License
 *                            Version 2.0, January 2004
 *                         http://www.apache.org/licenses/
 *
 *    TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION
 *
 *    1. Definitions.
 *
 *       "License" shall mean the terms and conditions for use, reproduction,
 *       and distribution as defined by Sections 1 through 9 of this document.
 *
 *       "Licensor" shall mean the copyright owner or entity authorized by
 *       the copyright owner that is granting the License.
 *
 *       "Legal Entity" shall mean the union of the acting entity and all
 *       other entities that control, are controlled by, or are under common
 *       control with that entity. For the purposes of this definition,
 *       "control" means (i) the power, direct or indirect, to cause the
 *       direction or management of such entity, whether by contract or
 *       otherwise, or (ii) ownership of fifty percent (50%) or more of the
 *       outstanding shares, or (iii) beneficial ownership of such entity.
 *
 *       "You" (or "Your") shall mean an individual or Legal Entity
 *       exercising permissions granted by this License.
 *
 *       "Source" form shall mean the preferred form for making modifications,
 *       including but not limited to software source code, documentation
 *       source, and configuration files.
 *
 *       "Object" form shall mean any form resulting from mechanical
 *       transformation or translation of a Source form, including but
 *       not limited to compiled object code, generated documentation,
 *       and conversions to other media types.
 *
 *       "Work" shall mean the work of authorship, whether in Source or
 *       Object form, made available under the License, as indicated by a
 *       copyright notice that is included in or attached to the work
 *       (an example is provided in the Appendix below).
 *
 *       "Derivative Works" shall mean any work, whether in Source or Object
 *       form, that is based on (or derived from) the Work and for which the
 *       editorial revisions, annotations, elaborations, or other modifications
 *       represent, as a whole, an original work of authorship. For the purposes
 *       of this License, Derivative Works shall not include works that remain
 *       separable from, or merely link (or bind by name) to the interfaces of,
 *       the Work and Derivative Works thereof.
 *
 *       "Contribution" shall mean any work of authorship, including
 *       the original version of the Work and any modifications or additions
 *       to that Work or Derivative Works thereof, that is intentionally
 *       submitted to Licensor for inclusion in the Work by the copyright owner
 *       or by an individual or Legal Entity authorized to submit on behalf of
 *       the copyright owner. For the purposes of this definition, "submitted"
 *       means any form of electronic, verbal, or written communication sent
 *       to the Licensor or its representatives, including but not limited to
 *       communication on electronic mailing lists, source code control systems,
 *       and issue tracking systems that are managed by, or on behalf of, the
 *       Licensor for the purpose of discussing and improving the Work, but
 *       excluding communication that is conspicuously marked or otherwise
 *       designated in writing by the copyright owner as "Not a Contribution."
 *
 *       "Contributor" shall mean Licensor and any individual or Legal Entity
 *       on behalf of whom a Contribution has been received by Licensor and
 *       subsequently incorporated within the Work.
 *
 *    2. Grant of Copyright License. Subject to the terms and conditions of
 *       this License, each Contributor hereby grants to You a perpetual,
 *       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
 *       copyright license to reproduce, prepare Derivative Works of,
 *       publicly display, publicly perform, sublicense, and distribute the
 *       Work and such Derivative Works in Source or Object form.
 *
 *    3. Grant of Patent License. Subject to the terms and conditions of
 *       this License, each Contributor hereby grants to You a perpetual,
 *       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
 *       (except as stated in this section) patent license to make, have made,
 *       use, offer to sell, sell, import, and otherwise transfer the Work,
 *       where such license applies only to those patent claims licensable
 *       by such Contributor that are necessarily infringed by their
 *       Contribution(s) alone or by combination of their Contribution(s)
 *       with the Work to which such Contribution(s) was submitted. If You
 *       institute patent litigation against any entity (including a
 *       cross-claim or counterclaim in a lawsuit) alleging that the Work
 *       or a Contribution incorporated within the Work constitutes direct
 *       or contributory patent infringement, then any patent licenses
 *       granted to You under this License for that Work shall terminate
 *       as of the date such litigation is filed.
 *
 *    4. Redistribution. You may reproduce and distribute copies of the
 *       Work or Derivative Works thereof in any medium, with or without
 *       modifications, and in Source or Object form, provided that You
 *       meet the following conditions:
 *
 *       (a) You must give any other recipients of the Work or
 *           Derivative Works a copy of this License; and
 *
 *       (b) You must cause any modified files to carry prominent notices
 *           stating that You changed the files; and
 *
 *       (c) You must retain, in the Source form of any Derivative Works
 *           that You distribute, all copyright, patent, trademark, and
 *           attribution notices from the Source form of the Work,
 *           excluding those notices that do not pertain to any part of
 *           the Derivative Works; and
 *
 *       (d) If the Work includes a "NOTICE" text file as part of its
 *           distribution, then any Derivative Works that You distribute must
 *           include a readable copy of the attribution notices contained
 *           within such NOTICE file, excluding those notices that do not
 *           pertain to any part of the Derivative Works, in at least one
 *           of the following places: within a NOTICE text file distributed
 *           as part of the Derivative Works; within the Source form or
 *           documentation, if provided along with the Derivative Works; or,
 *           within a display generated by the Derivative Works, if and
 *           wherever such third-party notices normally appear. The contents
 *           of the NOTICE file are for informational purposes only and
 *           do not modify the License. You may add Your own attribution
 *           notices within Derivative Works that You distribute, alongside
 *           or as an addendum to the NOTICE text from the Work, provided
 *           that such additional attribution notices cannot be construed
 *           as modifying the License.
 *
 *       You may add Your own copyright statement to Your modifications and
 *       may provide additional or different license terms and conditions
 *       for use, reproduction, or distribution of Your modifications, or
 *       for any such Derivative Works as a whole, provided Your use,
 *       reproduction, and distribution of the Work otherwise complies with
 *       the conditions stated in this License.
 *
 *    5. Submission of Contributions. Unless You explicitly state otherwise,
 *       any Contribution intentionally submitted for inclusion in the Work
 *       by You to the Licensor shall be under the terms and conditions of
 *       this License, without any additional terms or conditions.
 *       Notwithstanding the above, nothing herein shall supersede or modify
 *       the terms of any separate license agreement you may have executed
 *       with Licensor regarding such Contributions.
 *
 *    6. Trademarks. This License does not grant permission to use the trade
 *       names, trademarks, service marks, or product names of the Licensor,
 *       except as required for reasonable and customary use in describing the
 *       origin of the Work and reproducing the content of the NOTICE file.
 *
 *    7. Disclaimer of Warranty. Unless required by applicable law or
 *       agreed to in writing, Licensor provides the Work (and each
 *       Contributor provides its Contributions) on an "AS IS" BASIS,
 *       WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 *       implied, including, without limitation, any warranties or conditions
 *       of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A
 *       PARTICULAR PURPOSE. You are solely responsible for determining the
 *       appropriateness of using or redistributing the Work and assume any
 *       risks associated with Your exercise of permissions under this License.
 *
 *    8. Limitation of Liability. In no event and under no legal theory,
 *       whether in tort (including negligence), contract, or otherwise,
 *       unless required by applicable law (such as deliberate and grossly
 *       negligent acts) or agreed to in writing, shall any Contributor be
 *       liable to You for damages, including any direct, indirect, special,
 *       incidental, or consequential damages of any character arising as a
 *       result of this License or out of the use or inability to use the
 *       Work (including but not limited to damages for loss of goodwill,
 *       work stoppage, computer failure or malfunction, or any and all
 *       other commercial damages or losses), even if such Contributor
 *       has been advised of the possibility of such damages.
 *
 *    9. Accepting Warranty or Additional Liability. While redistributing
 *       the Work or Derivative Works thereof, You may choose to offer,
 *       and charge a fee for, acceptance of support, warranty, indemnity,
 *       or other liability obligations and/or rights consistent with this
 *       License. However, in accepting such obligations, You may act only
 *       on Your own behalf and on Your sole responsibility, not on behalf
 *       of any other Contributor, and only if You agree to indemnify,
 *       defend, and hold each Contributor harmless for any liability
 *       incurred by, or claims asserted against, such Contributor by reason
 *       of your accepting any such warranty or additional liability.
 *
 *    END OF TERMS AND CONDITIONS
 *
 *    APPENDIX: How to apply the Apache License to your work.
 *
 *       To apply the Apache License to your work, attach the following
 *       boilerplate notice, with the fields enclosed by brackets "[]"
 *       replaced with your own identifying information. (Don't include
 *       the brackets!)  The text should be enclosed in the appropriate
 *       comment syntax for the file format. We also recommend that a
 *       file or class name and description of purpose be included on the
 *       same "printed page" as the copyright notice for easier
 *       identification within third-party archives.
 *
 *    Copyright [yyyy] [name of copyright owner]
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include <chrono>
#include <gnuradio/io_signature.h>
#include "retune_fft_impl.h"

namespace gr {
  namespace iqtlabs {

    static const pmt::pmt_t TUNE = pmt::mp("tune");
    static const size_t OUT_BUF_MAX = 1024 * 1024 * 64;
    static const double MIN_PW = 1e-4;
    static const double MAX_PW = 1e4;

    retune_fft::sptr
    retune_fft::make(const std::string &tag, int vlen, int nfft, int samp_rate, uint64_t freq_start, uint64_t freq_end, int tune_step_hz, int tune_step_fft)
    {
      return gnuradio::make_block_sptr<retune_fft_impl>(
        tag, vlen, nfft, samp_rate, freq_start, freq_end, tune_step_hz, tune_step_fft);
    }

    retune_fft_impl::retune_fft_impl(const std::string &tag, int vlen, int nfft, int samp_rate, uint64_t freq_start, uint64_t freq_end, int tune_step_hz, int tune_step_fft)
      : gr::block("retune_fft",
              gr::io_signature::make(1 /* min inputs */, 1 /* max inputs */, vlen * sizeof(input_type)),
              gr::io_signature::make(1 /* min outputs */, 1 /*max outputs */, sizeof(output_type))),
        tag_(pmt::intern(tag)),
        vlen_(vlen),
        nfft_(nfft),
        samp_rate_(samp_rate),
        freq_start_(freq_start),
        freq_end_(freq_end),
        tune_step_hz_(tune_step_hz),
        tune_step_fft_(tune_step_fft),
        sample_(nfft),
        sample_count_(0),
        tune_freq_(freq_start),
        last_rx_freq_(0),
        fft_count_(0),
        tune_count_(0),
        last_sweep_start_(0)
    {
        message_port_register_out(TUNE);
    }

    retune_fft_impl::~retune_fft_impl()
    {
    }

    uint64_t retune_fft_impl::host_now_()
    {
        const std::chrono::seconds sec(1);
        const auto now = std::chrono::system_clock::now();
        return now.time_since_epoch() / sec;
    }

    void retune_fft_impl::retune_now_()
    {
        const uint64_t host_now = host_now_();

        d_logger->debug("retuning to {}", tune_freq_);
        ++tune_count_;
        pmt::pmt_t tune_rx = pmt::make_dict();
        tune_rx = pmt::dict_add(tune_rx, pmt::mp("freq"), pmt::from_long(tune_freq_));
        tune_rx = pmt::dict_add(tune_rx, pmt::mp("tag"), pmt::mp("now"));
        message_port_pub(TUNE, tune_rx);

	tune_freq_ += tune_step_hz_;
	if (last_sweep_start_ == 0) {
            last_sweep_start_ = host_now;
        } else if (tune_freq_ > freq_end_) {
            last_sweep_start_ = host_now;
            tune_freq_ = freq_start_;
            tune_count_ = 0;
        }
    }

    bool retune_fft_impl::sum_samples_(size_t c, const input_type* &in)
    {
        bool retune = false;
        for (size_t i = 0; i < c; ++i) {
            for (size_t j = 0; j < (vlen_ / nfft_); ++j) {
                for (size_t k = 0; k < nfft_; ++k) {
                    sample_[k] += *in++;
		}
		if (++fft_count_ == tune_step_fft_) {
                    fft_count_ = 0;
                    retune = true;
		}
		++sample_count_;
            }
        }
        consume_each(c);
        return retune;
    }

    void retune_fft_impl::forecast(int noutput_items, gr_vector_int& ninput_items_required)
    {
        ninput_items_required[0] = 1;
    }

    int retune_fft_impl::general_work(int noutput_items,
                                      gr_vector_int& ninput_items,
                                      gr_vector_const_void_star& input_items,
                                      gr_vector_void_star& output_items)
    {
        auto in = static_cast<const input_type*>(input_items[0]);
        auto out = static_cast<output_type*>(output_items[0]);
        const size_t in_count = ninput_items[0];
        const size_t in_first = nitems_read(0);

        if (!out_buf_.empty()) {
            const size_t leftover = std::min(out_buf_.size(), (size_t)noutput_items);
            auto from = out_buf_.begin();
            auto to = from + leftover;
            std::copy(from, to, out);
            out_buf_.erase(from, to);
            return leftover;
        }

        if (out_buf_.size() > OUT_BUF_MAX) {
            d_logger->error("output buffer full");
            return 0;
        }

        std::vector<tag_t> tags;
        get_tags_in_window(tags, 0, 0, in_count, tag_);

        if (tags.empty()) {
            if (sum_samples_(in_count, in)) {
                retune_now_();
            }
            return 0;
        }

        const auto& tag = tags[0];
        const auto rel = tag.offset - in_first;

        if (rel > 0) {
            if (sum_samples_(rel, in)) {
                 retune_now_();
            }
        }

        const uint64_t rx_freq = (uint64_t)pmt::to_double(tag.value);
        d_logger->debug("rx_freq: {}", rx_freq);

        if (rx_freq != last_rx_freq_) {
            d_logger->debug("new rx_freq tag: {}, last {}", rx_freq, last_rx_freq_);
            const uint64_t host_now = host_now_();
            const float bucket_size = samp_rate_ / vlen_;
            if (last_rx_freq_ && sample_count_) {
                std::transform(sample_.begin(), sample_.end(), sample_.begin(), [=](double &c){ return std::max(MIN_PW, std::min(c / sample_count_, MAX_PW)); });
                for (size_t i = 0; i < vlen_; ++i) {
                    const int bucket = i - (vlen_ / 2);
                    const auto bucket_freq = tune_freq_ + bucket_size * bucket;
                    if (bucket_freq < freq_start_ || bucket_freq > freq_end_) {
                        continue;
                    }
                    std::stringstream ss;
                    ss << host_now << " " << static_cast<uint64_t>(bucket_freq) << " " << sample_[i] << std::endl;
                    const std::string s = ss.str();
                    out_buf_.insert(out_buf_.end(), s.begin(), s.end());
                }
            }
            std::transform(sample_.begin(), sample_.end(), sample_.begin(), [](double &c){ return 0; });
            sample_count_ = 0;
            last_rx_freq_ = rx_freq;
        }

        if (sum_samples_(1, in)) {
            retune_now_();
        }
        return 0;
    }

  } /* namespace iqtlabs */
} /* namespace gr */
