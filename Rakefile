require 'bundler/gem_tasks'
require 'rspec/core/rake_task'

RSpec::Core::RakeTask.new(:spec)

require 'rake/extensiontask'

task build: :compile

Rake::ExtensionTask.new('core_foundation') do |ext|
  ext.lib_dir = 'lib/core_foundation'
end

require 'rubocop/rake_task'

desc 'Run RuboCop on the Lib Directory'
RuboCop::RakeTask.new(:rubocop) do |task|
  task.patterns = ['lib/**/*.rb']
  task.fail_on_error = false
end

task default: [:clobber, :compile, :spec, :rubocop]
