#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc6c01fa, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbde65608, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x92a94ad2, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc674de63, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1da6b5ae, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x99840d00, __VMLINUX_SYMBOL_STR(timecounter_init) },
	{ 0xa66dc601, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x16abfc10, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x1e4663cd, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xc1d22806, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x88df82a7, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0xd17fbaf3, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xdd61dfc2, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x1846825f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xea41f64, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0x7f13d491, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xb7eb0c3d, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xd042917d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4e3e1e44, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x7d9cc03b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xedb4350d, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xd9b96216, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x50271a4b, __VMLINUX_SYMBOL_STR(pci_disable_link_state_locked) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xbc488eaa, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xeb67d5b7, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x5bad0436, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xcd262071, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xea55fe71, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x381520cd, __VMLINUX_SYMBOL_STR(ptp_clock_unregister) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x48254905, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x508c9eda, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe659a8c5, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x4399f900, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x6d20ffba, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xf15e6c6b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x391afe42, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe4873a5b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x11ec5e3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x62e4100, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa27b8ea7, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0xbf97e500, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x41690ed4, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x924fc613, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x9536b0aa, __VMLINUX_SYMBOL_STR(ptp_clock_register) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x375b2a86, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0xdf46383, __VMLINUX_SYMBOL_STR(pci_clear_master) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xc542933a, __VMLINUX_SYMBOL_STR(timecounter_read) },
	{ 0x5077a7a9, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xb0a19973, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x2c319a31, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xb03007cb, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xa8b76a68, __VMLINUX_SYMBOL_STR(timecounter_cyc2time) },
	{ 0x73f57b28, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x2c36b0a, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xfd75cb0, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x8d63ac51, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0x36d4b0f5, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0xc0a158b5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x5ed4bec2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xecb2d629, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0xbdf0fa40, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x3b886de8, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3cbe9f88, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc8b49e84, __VMLINUX_SYMBOL_STR(pm_schedule_suspend) },
	{ 0xa12ee1eb, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0x43f47e07, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x17cf49e, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x38bd55bd, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa97d4a9c, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x467df16d, __VMLINUX_SYMBOL_STR(netdev_rss_key_fill) },
	{ 0x9e308128, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x7d0571e5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x61fb248a, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xd259c7ca, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x6e2f732, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x859b7eea, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x635a4d29, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfc79bfbc, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xf09609e8, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xf2ca1011, __VMLINUX_SYMBOL_STR(ptp_clock_index) },
	{ 0x3661d267, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xb83399a3, __VMLINUX_SYMBOL_STR(dev_trans_start) },
	{ 0x2b9e8aac, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xfa35a20, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0x8ce88e26, __VMLINUX_SYMBOL_STR(pci_dev_run_wake) },
	{ 0x4203c482, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xc357923c, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0x7c2013b3, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x39a63d15, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7cbab064, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9e0c711d, __VMLINUX_SYMBOL_STR(vzalloc_node) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x420ffece, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2e542d3c, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x727e3950, __VMLINUX_SYMBOL_STR(__napi_alloc_skb) },
	{ 0x796e48e5, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x64a71dc1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5e07b899, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x36c8811, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x85225e08, __VMLINUX_SYMBOL_STR(pcie_capability_write_word) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xbbd78bd4, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x58b5d68d, __VMLINUX_SYMBOL_STR(pci_request_selected_regions_exclusive) },
	{ 0x919577e5, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0xcb2ced96, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0x1a214add, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x951f4a81, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x363cd1b7, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptp";

MODULE_ALIAS("pci:v00008086d0000105Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000294Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000155Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001559sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000156Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001570sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6453212B70344504D53DE09");
